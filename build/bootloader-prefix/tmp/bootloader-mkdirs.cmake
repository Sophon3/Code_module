# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/Sophon/esp_v5.1/esp-idf/components/bootloader/subproject"
  "C:/Users/Sophon/Learning/Hardware/ESP32/ESP32C3/MESH_SEND_TEST/ble_mesh_provisioner_1/build/bootloader"
  "C:/Users/Sophon/Learning/Hardware/ESP32/ESP32C3/MESH_SEND_TEST/ble_mesh_provisioner_1/build/bootloader-prefix"
  "C:/Users/Sophon/Learning/Hardware/ESP32/ESP32C3/MESH_SEND_TEST/ble_mesh_provisioner_1/build/bootloader-prefix/tmp"
  "C:/Users/Sophon/Learning/Hardware/ESP32/ESP32C3/MESH_SEND_TEST/ble_mesh_provisioner_1/build/bootloader-prefix/src/bootloader-stamp"
  "C:/Users/Sophon/Learning/Hardware/ESP32/ESP32C3/MESH_SEND_TEST/ble_mesh_provisioner_1/build/bootloader-prefix/src"
  "C:/Users/Sophon/Learning/Hardware/ESP32/ESP32C3/MESH_SEND_TEST/ble_mesh_provisioner_1/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/Sophon/Learning/Hardware/ESP32/ESP32C3/MESH_SEND_TEST/ble_mesh_provisioner_1/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/Sophon/Learning/Hardware/ESP32/ESP32C3/MESH_SEND_TEST/ble_mesh_provisioner_1/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
