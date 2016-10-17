DEVICE_PACKAGE_OVERLAYS := device/qcom/msm8909/overlay

TARGET_USES_QCOM_BSP := true
ifeq ($(TARGET_PRODUCT),msm8909)
TARGET_USES_QCA_NFC := false
endif
TARGET_USES_QCA_NFC := false
ifeq ($(TARGET_USES_QCOM_BSP), true)
# Add QC Video Enhancements flag
TARGET_ENABLE_QC_AV_ENHANCEMENTS := true
endif #TARGET_USES_QCOM_BSP


#QTIC flag
-include $(QCPATH)/common/config/qtic-config.mk

# media_profiles and media_codecs xmls for msm8909
ifeq ($(TARGET_ENABLE_QC_AV_ENHANCEMENTS), true)
PRODUCT_COPY_FILES += device/qcom/msm8909/media/media_profiles_8909.xml:system/etc/media_profiles.xml \
                      device/qcom/msm8909/media/media_codecs_8909.xml:system/etc/media_codecs.xml
endif

$(call inherit-product, device/qcom/common/common.mk)

PRODUCT_NAME := msm8909
PRODUCT_DEVICE := msm8909

ifeq ($(strip $(TARGET_USES_QTIC)),true)
# font rendering engine feature switch
-include $(QCPATH)/common/config/rendering-engine.mk
ifneq (,$(strip $(wildcard $(PRODUCT_RENDERING_ENGINE_REVLIB))))
    MULTI_LANG_ENGINE := REVERIE
endif
endif

#Android EGL implementation
PRODUCT_PACKAGES += libGLES_android

# Audio configuration file
PRODUCT_COPY_FILES += \
    device/qcom/msm8909/audio_policy.conf:system/etc/audio_policy.conf \
    device/qcom/msm8909/audio_effects.conf:system/vendor/etc/audio_effects.conf \
    device/qcom/msm8909/mixer_paths_qrd_skuh.xml:system/etc/mixer_paths_qrd_skuh.xml \
    device/qcom/msm8909/mixer_paths_qrd_skui.xml:system/etc/mixer_paths_qrd_skui.xml \
    device/qcom/msm8909/mixer_paths.xml:system/etc/mixer_paths.xml \
    device/qcom/msm8909/mixer_paths_msm8909_pm8916.xml:system/etc/mixer_paths_msm8909_pm8916.xml \
    device/qcom/msm8909/mixer_paths_skua.xml:system/etc/mixer_paths_skua.xml \
    device/qcom/msm8909/mixer_paths_skuc.xml:system/etc/mixer_paths_skuc.xml \
    device/qcom/msm8909/mixer_paths_skue.xml:system/etc/mixer_paths_skue.xml \
    device/qcom/msm8909/sound_trigger_mixer_paths.xml:system/etc/sound_trigger_mixer_paths.xml \
    device/qcom/msm8909/sound_trigger_platform_info.xml:system/etc/sound_trigger_platform_info.xml \
    device/qcom/msm8909/ft-0x67-testparam.ini:system/etc/autotouch/ft-0x67-testparam.ini

# Added by zhangwei for auto test 2015-11-14 begin
PRODUCT_PACKAGES += qua_auto.wav
# Added by zhangwei for auto test 2015-11-14 end
# NFC packages
ifeq ($(TARGET_USES_QCA_NFC),true)
NFC_D := true

ifeq ($(NFC_D), true)
    PRODUCT_PACKAGES += \
        libnfcD-nci \
        libnfcD_nci_jni \
        nfc_nci.msm8916 \
        NfcDNci \
        Tag \
        com.android.nfc_extras \
        com.android.nfc.helper \
        SmartcardService \
        org.simalliance.openmobileapi \
        org.simalliance.openmobileapi.xml \
        libassd
else
    PRODUCT_PACKAGES += \
    libnfc-nci \
    libnfc_nci_jni \
    nfc_nci.msm8916 \
    NfcNci \
    Tag \
    com.android.nfc_extras
endif

# file that declares the MIFARE NFC constant
# Commands to migrate prefs from com.android.nfc3 to com.android.nfc
# NFC access control + feature files + configuration
PRODUCT_COPY_FILES += \
        packages/apps/Nfc/migrate_nfc.txt:system/etc/updatecmds/migrate_nfc.txt \
        frameworks/native/data/etc/com.nxp.mifare.xml:system/etc/permissions/com.nxp.mifare.xml \
        frameworks/native/data/etc/com.android.nfc_extras.xml:system/etc/permissions/com.android.nfc_extras.xml \
        frameworks/native/data/etc/android.hardware.nfc.xml:system/etc/permissions/android.hardware.nfc.xml \
        frameworks/native/data/etc/android.hardware.nfc.hce.xml:system/etc/permissions/android.hardware.nfc.hce.xml
# Enable NFC Forum testing by temporarily changing the PRODUCT_BOOT_JARS
# line has to be in sync with build/target/product/core_base.mk
endif # TARGET_USES_QCA_NFC

PRODUCT_BOOT_JARS += qcmediaplayer \
                     WfdCommon \
                     oem-services \
                     qcom.fmradio \
                     org.codeaurora.Performance \
                     vcard \
                     tcmiface

# Listen configuration file
PRODUCT_COPY_FILES += \
    device/qcom/msm8909/listen_platform_info.xml:system/etc/listen_platform_info.xml

# Feature definition files for msm8909
PRODUCT_COPY_FILES += \
    frameworks/native/data/etc/android.hardware.sensor.accelerometer.xml:system/etc/permissions/android.hardware.sensor.accelerometer.xml \
    frameworks/native/data/etc/android.hardware.sensor.light.xml:system/etc/permissions/android.hardware.sensor.light.xml \
    frameworks/native/data/etc/android.hardware.sensor.proximity.xml:system/etc/permissions/android.hardware.sensor.proximity.xml

#fstab.qcom
#Modified by wuqijun for huawei sdcard fuse switch (QL70X) SW00121856 2015-03-17 begin
PRODUCT_PACKAGES += fstab.qcom \
                    fstab_sdcard.qcom \
                    misc.bin \
                    hwdiag \
                    tar
#Modified by wuqijun for huawei sdcard fuse switch (QL70X) SW00121856 2015-03-17 end

#add sparse tools by baiyongjie 20131013
PRODUCT_PACKAGES += \
     rawprogram0.xml \
     checksparse.py \
     FactoryKit \
     YepSetProp \
     EngineeringMode \
     PhoneComponentInfo \
     RuntimeTest \
     YepFileManager \
     YepSoundRecorder \
     YepVideoPlayer \
     MMIFunctionTest \
     SrecordLog \
     LTA \
     RuntimeTest \
     config.img \
	 flashlight

#add ConfigurationClient by tansen 20150304 SW00113134 SW00111542
PRODUCT_PACKAGES += \
     ConfigurationClient

PRODUCT_PACKAGES += \
    libqcomvisualizer \
    libqcompostprocbundle \
    libqcomvoiceprocessing

#OEM Services library
PRODUCT_PACKAGES += oem-services
PRODUCT_PACKAGES += libsubsystem_control
PRODUCT_PACKAGES += libSubSystemShutdown

PRODUCT_PACKAGES += wcnss_service

#wlan driver
PRODUCT_COPY_FILES += \
    device/qcom/msm8909/WCNSS_qcom_cfg.ini:system/etc/wifi/WCNSS_qcom_cfg.ini \
    device/qcom/msm8909/WCNSS_wlan_dictionary.dat:persist/WCNSS_wlan_dictionary.dat \
    device/qcom/msm8909/wlan_mac.bin:persist/wlan_mac.bin
# Add by wuqijun for factory current test. (general) 2014-08-08 begin 
PRODUCT_COPY_FILES += \
    device/qcom/msm8909/init.qcom.screentimeout.sh:system/etc/init.qcom.screentimeout.sh

PRODUCT_PACKAGES += \
    wpa_supplicant_overlay.conf \
    p2p_supplicant_overlay.conf
#ANT+ stack
PRODUCT_PACKAGES += \
AntHalService \
libantradio \
antradio_app

# Defined the locales
#PRODUCT_LOCALES += th_TH vi_VN tl_PH hi_IN ar_EG ru_RU tr_TR pt_BR bn_IN mr_IN ta_IN te_IN zh_HK \
#        in_ID my_MM km_KH sw_KE uk_UA pl_PL sr_RS sl_SI fa_IR kn_IN ml_IN ur_IN gu_IN or_IN en_ZA

# remove by xutao 20150522
# Add the overlay path
#PRODUCT_PACKAGE_OVERLAYS := $(QCPATH)/qrdplus/Extension/res-overlay \
        $(QCPATH)/qrdplus/globalization/multi-language/res-overlay \
        $(PRODUCT_PACKAGE_OVERLAYS)
PRODUCT_PACKAGE_OVERLAYS := $(QCPATH)/qrdplus/Extension/res-overlay \
        $(PRODUCT_PACKAGE_OVERLAYS)
# remove by xutao 20150522 

#added by litao for cd-rom iso copy begin 2014/6/16 begin
PRODUCT_COPY_FILES += device/qcom/msm8909/YEPAUTOINST.ISO:system/etc/YEPAUTOINST.ISO
#added by litao for cd-rom iso copy end	 2014/6/16  end

#added by wangqi for SW00132397 2015/05/01 begin
PRODUCT_COPY_FILES += packages/yepapp/YepFactoryKit/assets/openfactory.sh:system/etc/openfactory.sh
#added by wangqi for SW00132397 2015/05/01 end
include product_config_$(firstword $(strip $(subst _, ,$(patsubst %,%,$(YEP_PRODUCT_NAME)))))/product_config.mk

#add by tansen for widevine SW00152324 20150629

PRODUCT_PROPERTY_OVERRIDES += drm.service.enabled = true \
                              keyguard.no_require_sim=true \
                              ro.com.google.clientidbase=android-google
PRODUCT_PACKAGES += com.google.widevine.software.drm.xml \
                    com.google.widevine.software.drm \
                    libdrmwvmplugin \
                    libwvm \
                    WidevineSamplePlayer \
                    libwvdrmengine \
                    libWVStreamControlAPI_L$(BOARD_WIDEVINE_OEMCRYPTO_LEVEL) \
                    libwvdrm_L$(BOARD_WIDEVINE_OEMCRYPTO_LEVEL)
