set(SOURCES
    argc_err_msg.c
    val_err_msg.c
    not_valid_arg.c
    one_arg_err_msg.c
)

add_library(sub64_msg STATIC ${SOURCES})