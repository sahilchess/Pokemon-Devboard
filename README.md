# pokemon_devboard0
 
a pokemon themed rp2040 dev board designed in kicad, arduino form factor lookalike
 
## features
 
- rp2040 mcu, 30 gpio broken out
- usb_c input with mcp1700 3.3v regulator
- w25q128jvs 16mb qspi flash for program storage
- 12mhz crystal oscillator
- reset button and bootsel button
- 2 user leds on gpio2 and gpio3
- 2 user buttons on gpio4 and gpio5
- swd debug header (swclk, swdio, gnd)
- gpioa and gpiob headers for full pin access
- power headers for gnd, 3v3, and 5v lines
- test pads for gnd, 3v3, 5v, swclk, swdio, run, and 2 mounting holes
## power
 
usb_c feeds vbus into the mcp1700 330xxtt regulator, output is 3.3v. decoupling caps sit across usb_vdd, adc_avdd, vreg_vin, vreg_vout, and dvdd per the rp2040 datasheet recommendations.
 
## flash
 
w25q128jvs wired to the rp2040 qspi bus (qspi_ss, qspi_sclk, qspi_sd0 to sd3). sw1 is the bootsel button, pulls qspi_ss to select flash bootrom mode on boot.
 
## files
 
- pcb_design, kicad project, schematic and board layout
- production, gerbers and fab outputs ready to send out
- gerber.zip, zipped gerbers for ordering
- readme.md, this file
## status
 
schematic and layout done, routing complete on data pins, power, and debug header. next step is ordering boards and doing bring up