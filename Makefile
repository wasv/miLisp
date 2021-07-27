STEPS = step0_repl step1_read_print step2_eval step3_env step4_if_fn_do \
        step5_tco step6_file step7_quote step8_macros step9_try stepA_mal

TARGETS=$(addprefix build/,${STEPS})

.PHONY: ${TARGETS}
${TARGETS}:
	cmake -Bbuild/ .
	cmake --build build --target $(@F)
