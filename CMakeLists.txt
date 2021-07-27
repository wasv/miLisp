cmake_minimum_required(VERSION 3.12)

project(miLisp C)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_C_STANDARD 11)


set(STEPS
    step0_repl step1_read_print step2_eval step3_env step4_if_fn_do
    step5_tco step6_file step7_quote step8_macros step9_try stepA_mal
)

foreach(STEP IN LISTS STEPS)
    file(GLOB SRCS src/mal/${STEP}/**.c)
    add_executable(${STEP} src/main.c ${SRCS})
    target_include_directories(${STEP} PRIVATE include/)
endforeach()
