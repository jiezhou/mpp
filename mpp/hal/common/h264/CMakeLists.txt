# vim: syntax=cmake
include_directories(.)
include_directories(../../rkenc/common/)
include_directories(../../rkenc/h264e/)
include_directories(../../vpu/h264e/)

# hal h264 header
set(HAL_H264E_HDR
    hal_h264e_com.h
    )

# hal h264 encoder sourse
set(HAL_H264E_SRC
    h264e_stream.c
    hal_h264e_com.c
    hal_h264e_api_v2.c
    hal_h264e_api.c
    )

add_library(hal_h264e STATIC
            ${HAL_H264E_HDR}
            ${HAL_H264E_SRC}
            )

# remote vpu
if (USE_REMOTE_VPU)
include_directories(../../rvpu/h264e-stub/)
add_definitions(-DUSE_REMOTE_VPU)
target_link_libraries(hal_h264e hal_h264e_rkv hal_h264e_vpu hal_h264e_stub mpp_base)
else()
target_link_libraries(hal_h264e hal_h264e_rkv hal_h264e_vpu mpp_base)
endif()

set_target_properties(hal_h264e PROPERTIES FOLDER "mpp/hal")
