set(srcs "main.c" "provisioner_set_state.c")

idf_component_register(SRCS "${srcs}"
                    INCLUDE_DIRS  ".")
