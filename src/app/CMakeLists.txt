add_executable(sub64 sub64.c)

target_link_libraries(sub64 sub64_msg sub64_menus)

# INSTALL THE EXECUTABLE TO USR/BIN
install(
    TARGETS sub64
    DESTINATION /usr/local/bin/
)