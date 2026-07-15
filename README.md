# [pokemon_devboard0](https://kicanvas.org/?repo=https%3A%2F%2Fgithub.com%2Fsahilchess%2FPokemon-Devboard%2Ftree%2Fmain%2FPCB_DESIGN)
 
a pokemon themed rp2040 dev board designed in kicad, arduino form factor lookalike

**made for macondo** [here](https://macondo.hackclub.com/projects/6075)

<img width="4000" height="auto" alt="image" src="https://github.com/user-attachments/assets/298cd4e4-e34d-43fa-a4a7-8d023f51e578" />

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
 
usb_c feeds vbus into the mcp1700 330xxtt regulator, output is 3.3v and 5v. decoupling caps sit across usb_vdd, adc_avdd, vreg_vin, vreg_vout, and dvdd per the rp2040 datasheet recommendations.
 
## flash
 
w25q128jvs wired to the rp2040 qspi bus (qspi_ss, qspi_sclk, qspi_sd0 to sd3). sw1 is the bootsel button, pulls qspi_ss to select flash bootrom mode on boot.
 
## files
 
- pcb_design, kicad project, schematic and board layout
- production, gerbers and fab outputs ready to send out
- gerber.zip, zipped gerbers for ordering
- readme.md, this file
## status
 
ready to buy from jlcpcb, waiting on HC grant card

## pictures
<img width="4000" height="auto" alt="image" src="https://github.com/user-attachments/assets/f6cee3b5-ba18-4dc4-8d5f-515fc8583687" />
<img width="4000" height="auto" alt="image" src="https://github.com/user-attachments/assets/8cdeff5a-7641-427f-8762-d7c6319703e3" />
<img width="4000" height="auto" alt="image" src="https://github.com/user-attachments/assets/05668771-2855-4777-89d4-3b7bf1a5aacf" />
<img width="4000" height="auto" alt="image" src="https://github.com/user-attachments/assets/705a63e4-4e88-4b53-9f6c-20467da256ab" />


