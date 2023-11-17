add_executable(sub64 sub64.c)

# target_link_libraries(sub64)

# INSTALL THE EXECUTABLE TO USR/BIN
install(
    TARGETS sub64
    DESTINATION /usr/local/bin/
)