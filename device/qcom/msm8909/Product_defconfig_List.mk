LOCAL_PATH := $(call my-dir)

#======================PRODUCT LIST BEGIN========================================

#added by liumx begin
ifeq ($(YEP_PRODUCT_NAME),QL860_BASE)
    KERNEL_DEFCONFIG := msm8909_ql860_base_defconfig
endif

ifeq ($(YEP_PRODUCT_NAME),QL861_BASE)
    KERNEL_DEFCONFIG := msm8909_ql861_base_defconfig
endif

ifeq ($(YEP_PRODUCT_NAME),QL862_BASE)
    KERNEL_DEFCONFIG := msm8909_ql862_base_defconfig
endif
#added by liumx end

#added by liuyk start
ifeq ($(YEP_PRODUCT_NAME),QL610_BASE)
    KERNEL_DEFCONFIG := msm8909_ql610_base_defconfig
endif

ifeq ($(YEP_PRODUCT_NAME),QL610_X455)
    KERNEL_DEFCONFIG := msm8909_ql610_base_defconfig
endif
#added by liuyk end

#added by yujunfeng start
ifeq ($(YEP_PRODUCT_NAME),QL613_BASE)
    KERNEL_DEFCONFIG := msm8909_ql613_base_defconfig
endif
#added by yujunfeng end
#======================PRODUCT LIST END==========================================
