.section .bootloader
  . = 0x8000;
  .bootloader_start:

.section .text
  . = . + 0x10000;
  kernel_code:

.section .data
  . = . + 0x1000;
  data_start:

.section .bss
  . = . + 0x1000;
  bss_start:
  . = . + 0x1000;

.section .end
  end:
