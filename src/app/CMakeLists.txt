add_executable(sub64 sub64.c)

target_link_libraries(sub64 sub64_msg sub64_menus)

# CREATE DIRECTORY
set(dest_path "$ENV{HOME}/.sub64")

# INSTALL THE EXECUTABLE TO USR/BIN
install(
    TARGETS sub64
    DESTINATION /usr/local/bin/
)

# CREATE CONFIG FILE
set(file_path "$ENV{HOME}/.sub64/sub64_data.txt")

install(SCRIPT 
    CODE "file(WRITE \"${file_path}\" \"EMPTY\")"
)