LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := sdcard.c
LOCAL_MODULE := sdcard
LOCAL_CFLAGS := -Wall -Wno-unused-parameter -Werror

LOCAL_SHARED_LIBRARIES := libc libcutils

APPOPS_SDCARD_PROTECT := enable

ifdef APPOPS_SDCARD_PROTECT
LOCAL_CFLAGS += -DAPPOPS_SDCARD_PROTECT
LOCAL_C_INCLUDES += \
	$(LOCAL_PATH)/../../../external/sqlite/dist

LOCAL_SHARED_LIBRARIES += libsqlite
endif

include $(BUILD_EXECUTABLE)

#added by cuixiaokang for generate recovery sdcard_static command, (general) 2014.07.21 begin
include $(CLEAR_VARS)
LOCAL_SRC_FILES := sdcard.c
LOCAL_MODULE := sdcard_static
LOCAL_STATIC_LIBRARIES := libc libcutils liblog
LOCAL_FORCE_STATIC_EXECUTABLE := true
LOCAL_MODULE_TAGS := optional
include $(BUILD_EXECUTABLE)
#added by cuixiaokang for generate recovery sdcard_static command, (general) 2014.07.21 end
