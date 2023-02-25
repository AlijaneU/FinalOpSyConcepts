cmd_/root/kernel_modules/Module.symvers := sed 's/ko$$/o/' /root/kernel_modules/modules.order | scripts/mod/modpost -m -a  -o /root/kernel_modules/Module.symvers -e -i Module.symvers   -T -
