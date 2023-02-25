cmd_/root/kernel_modules/hello_world_mod.mod := printf '%s\n'   hello_world_mod.o | awk '!x[$$0]++ { print("/root/kernel_modules/"$$0) }' > /root/kernel_modules/hello_world_mod.mod
