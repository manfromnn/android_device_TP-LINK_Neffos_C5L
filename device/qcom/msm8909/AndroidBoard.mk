#
# Copyright (C) 2011 The Android Open-Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
LOCAL_PATH := $(call my-dir)

#----------------------------------------------------------------------
# Compile (L)ittle (K)ernel bootloader and the nandwrite utility
#----------------------------------------------------------------------
ifneq ($(strip $(TARGET_NO_BOOTLOADER)),true)

# Compile
include bootable/bootloader/lk/AndroidBoot.mk

$(INSTALLED_BOOTLOADER_MODULE): $(TARGET_EMMC_BOOTLOADER) | $(ACP)
	$(transform-prebuilt-to-target)
$(BUILT_TARGET_FILES_PACKAGE): $(INSTALLED_BOOTLOADER_MODULE)

droidcore: $(INSTALLED_BOOTLOADER_MODULE)
endif

#----------------------------------------------------------------------
# Compile Linux Kernel
#----------------------------------------------------------------------

#liuyk add start
include device/qcom/msm8909/Product_defconfig_List.mk
#liuyk add end

ifeq ($(KERNEL_DEFCONFIG),)
    KERNEL_DEFCONFIG := msm8909_ql860_base_defconfig
endif

include kernel/AndroidKernel.mk

$(INSTALLED_KERNEL_TARGET): $(TARGET_PREBUILT_KERNEL) | $(ACP)
	$(transform-prebuilt-to-target)

#----------------------------------------------------------------------
# Copy additional target-specific files
#----------------------------------------------------------------------
include $(CLEAR_VARS)
LOCAL_MODULE       := vold.fstab
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := init.target.rc
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_ROOT_OUT)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := init.carrier.rc
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_ROOT_OUT)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := fstab.qcom
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_ROOT_OUT)
include $(BUILD_PREBUILT)

#Modified by wuqijun for huawei sdcard fuse switch (QL70X) SW00121856 2015-03-17 begin
include $(CLEAR_VARS)
LOCAL_MODULE       := fstab_sdcard.qcom
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_ROOT_OUT)
include $(BUILD_PREBUILT)
#Modified by wuqijun for huawei sdcard fuse switch (QL70X) SW00121856 2015-03-17 end

include $(CLEAR_VARS)
LOCAL_MODULE       := init.qcom.modem_links.sh
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := init.qti.synaptics_dsx_qhd.sh
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH := $(TARGET_OUT_ETC)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := gpio-keys.kl
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_OUT_KEYLAYOUT)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := synaptics_dsx.kl
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_OUT_KEYLAYOUT)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := ft5x06_ts.kl
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_OUT_KEYLAYOUT)
include $(BUILD_PREBUILT)

#add kl files for QL702/703 tp by pangle 20150304 begin
include $(CLEAR_VARS)
LOCAL_MODULE       := FT5x36.kl
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_OUT_KEYLAYOUT)
include $(BUILD_PREBUILT)
#add kl files for QL702/703 tp by pangle 20150304 end

#add kl files for QL702/703 tp by pangle 20150304 begin
include $(CLEAR_VARS)
LOCAL_MODULE       := msg2xxx.kl
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_OUT_KEYLAYOUT)
include $(BUILD_PREBUILT)
#add kl files for QL702/703 tp by pangle 20150304 end

include $(CLEAR_VARS)
LOCAL_MODULE       := atmel_mxt_ts.kl
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_OUT_KEYLAYOUT)
include $(BUILD_PREBUILT)

#add hall kl file for ql860 by yanfei 20150320 begin
include $(CLEAR_VARS)
LOCAL_MODULE       := hall_sensors.kl
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_OUT_KEYLAYOUT)
include $(BUILD_PREBUILT)
#add hall kl file for ql860 by yanfei 20150320 end

ifeq ($(strip $(BOARD_HAS_QCOM_WLAN)),true)
include $(CLEAR_VARS)
LOCAL_MODULE       := wpa_supplicant_overlay.conf
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/wifi
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := p2p_supplicant_overlay.conf
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/wifi
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := hostapd_default.conf
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/hostapd
LOCAL_SRC_FILES    := hostapd.conf
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := hostapd.accept
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/hostapd
LOCAL_SRC_FILES    := hostapd.accept
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := hostapd.deny
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/hostapd
LOCAL_SRC_FILES    := hostapd.deny
include $(BUILD_PREBUILT)

# Added by yanwenlong for fastmmi language. (general) 2013-9-29 begin
include $(CLEAR_VARS)
LOCAL_MODULE       := hzk12
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := asc12
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
include $(BUILD_PREBUILT)

include $(CLEAR_VARS)
LOCAL_MODULE       := en_cn.dic
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
include $(BUILD_PREBUILT)
#Added by yanwenlong for fastmmi language. (general) 2013-9-29 end

# Added by yanwenlong for wlan_nv.bin. (general) 2013-12-03 begin
include $(CLEAR_VARS)
LOCAL_MODULE       := WCNSS_qcom_wlan_nv.bin
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(TARGET_OUT_ETC)/firmware/wlan/prima
include $(BUILD_PREBUILT)
# Added by yanwenlong for wlan_nv.bin. (general) 2013-12-03 end

# Added by yanwenlong for misc. (general) 2014-5-30 begin
include $(CLEAR_VARS)
LOCAL_MODULE       := misc.bin
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(PRODUCT_OUT)
include $(BUILD_PREBUILT)
# Added by yanwenlong for misc. (general) 2014-5-30 end

# Added by yanwenlong for read log. (general) 2015-10-8 begin
include $(CLEAR_VARS)
LOCAL_SRC_FILES := tar
LOCAL_MODULE := tar
LOCAL_CFLAGS += -pie -fPIE
LOCAL_LDFLAGS += -pie -fPIE
LOCAL_MODULE_CLASS := EXECUTABLES
LOCAL_MODULE_TAGS := optional
include $(BUILD_PREBUILT)
# Added by yanwenlong for read log. (general) 2015-10-8 end

# Added by zhangwei for auto test 2015-11-14 begin
include $(CLEAR_VARS)
LOCAL_MODULE       := qua_auto.wav
LOCAL_MODULE_TAGS  := optional
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
include $(BUILD_PREBUILT)
# Added by zhangwei for auto test 2015-11-14 end

# Added by xutao for config.img. (general) 2015-5-31 begin
include $(CLEAR_VARS)
LOCAL_MODULE       := config.img
LOCAL_MODULE_TAGS  := optional eng
LOCAL_MODULE_CLASS := ETC
LOCAL_SRC_FILES    := $(LOCAL_MODULE)
LOCAL_MODULE_PATH  := $(PRODUCT_OUT)
include $(BUILD_PREBUILT)
# Added by xutao for config.img. (general) 2015-5-31 end

#Create symbolic links
$(shell mkdir -p $(TARGET_OUT_ETC)/firmware/wlan/prima; \
        ln -sf /persist/wlan_mac.bin \
        $(TARGET_OUT_ETC)/firmware/wlan/prima/wlan_mac.bin; \
        ln -sf /persist/WCNSS_wlan_dictionary.dat \
        $(TARGET_OUT_ETC)/firmware/wlan/prima/WCNSS_wlan_dictionary.dat; \
        ln -sf /data/misc/wifi/WCNSS_qcom_cfg.ini \
        $(TARGET_OUT_ETC)/firmware/wlan/prima/WCNSS_qcom_cfg.ini)
endif

#----------------------------------------------------------------------
# Radio image
#----------------------------------------------------------------------
ifeq ($(ADD_RADIO_FILES), true)
radio_dir := $(LOCAL_PATH)/radio
RADIO_FILES := $(shell cd $(radio_dir) ; ls)
$(foreach f, $(RADIO_FILES), \
    $(call add-radio-file,radio/$(f)))
endif

#----------------------------------------------------------------------
# Radio image
#----------------------------------------------------------------------
ifeq ($(ADD_RADIO_FILES), true)
radio_dir := $(LOCAL_PATH)/radio
RADIO_FILES := $(shell cd $(radio_dir) ; ls)
$(foreach f, $(RADIO_FILES), \
    $(call add-radio-file,radio/$(f)))
endif

#----------------------------------------------------------------------
# extra images
#----------------------------------------------------------------------
include device/qcom/common/generate_extra_images.mk

#----------------------------------------------------------------------
# pick up additional files for Tiny Android builds
#----------------------------------------------------------------------
ifeq ($(BUILD_TINY_ANDROID), true)
include device/qcom/common/rootdir/Android.mk
endif
