cmake_minimum_required(VERSION 3.12)

project(miLisp C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 11)

file(GLOB COMMON_SRC src/common/**.c)
add_library(milisp ${COMMON_SRC})
target_include_directories(milisp PUBLIC src/common/include/)

set(STEPS
    step0_repl step1_read_print step2_eval step3_env step4_if_fn_do
    step5_tco step6_file step7_quote step8_macros step9_try stepA_mal
)

foreach(STEP IN LISTS STEPS)
    set(TARGET ${STEP})
    add_executable(${TARGET} src/main_${TARGET}.c)
    target_link_libraries(${TARGET} milisp)
endforeach()
