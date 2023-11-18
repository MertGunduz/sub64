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

# WRITE DATA TO CONFIG FILE
set(data "Toyota, Ford, Chevrolet, Honda, Nissan, BMW, Mercedes-Benz, Volkswagen, Audi, Porsche, Lexus, Hyundai, Kia, Subaru, Mazda, Dodge, Jeep, Tesla, Volvo, Land-Rover, Jaguar, Acura, Infiniti, Cadillac, Buick, GMC, Chrysler, Lincoln, Mitsubishi, Fiat, Alfa-Romeo, Aston-Martin, Bentley, Ferrari, Lamborghini, Maserati, Rolls-Royce, McLaren, Lotus, Bugatti, Renault, Peugeot, Citroën, Seat, Skoda, Opel, Saab, Mini, MG, Rover, Smart, Lancia, Dacia, Scania, Koenigsegg, Pagani, Rimac, Zenvo, Mahindra, Tata, Maruti-Suzuki, Daewoo, SsangYong, Genesis, Holden, Proton, Perodua, Geely, Chery, Great-Wall, BYD, FAW, Dongfeng, BAIC, Haval, Wuling, GAC, Nio, Xpeng, Kandi, Isuzu, Suzuki, Daihatsu, Fisker, Lucid, Rivian, Bollinger, Canoo, Faraday-Future, Polestar, Hispano-Suiza, Morgan, Bristol, Ariel, Caterham")

install(SCRIPT 
    CODE "file(WRITE \"${file_path}\" \"${data}\")"
)
