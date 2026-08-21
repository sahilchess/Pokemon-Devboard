# [Pokemon Devboard](https://kicanvas.org/?repo=https%3A%2F%2Fgithub.com%2Fsahilchess%2FPokemon-Devboard%2Ftree%2Fmain%2FPCB_DESIGN)
 
a pokemon themed rp2040 dev board designed in kicad, arduino lookalike

[woah whats this?](https://forge.hackclub.com/projects/1680)

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
- clear pinouts with silkscreen

## why i made this

i've always liked the arduino form factor. it's simple and just works. everyone knows it. but here's what got me thinkin, arduino is literally the biggest mcu maker in the world and they never made the chip better. they just stuck with the old 8-bit avrs while everything else moved on to faster processors.

so i wondered, what if i could take the rp2040, which is actually good, and put it in that arduino shape? no one was doing it. so i did it.

making this taught me a ton about power delivery, flash wiring, schematic design, all the stuff that goes into actually making something people can use. and honestly, it's just cool to know i bridged that gap. the arduino form factor is iconic because it works, and the rp2040 is fast and has tons of gpio. now you get both.

if you build with this, you get the form factor you already know how to use but way more power under the hood.

## power
 
usb_c feeds vbus into the mcp1700 330xxtt regulator, output is 3.3v and 5v. decoupling caps sit across usb_vdd, adc_avdd, vreg_vin, vreg_vout, and dvdd per the rp2040 datasheet recommendations.
 
## flash
 
w25q128jvs wired to the rp2040 qspi bus (qspi_ss, qspi_sclk, qspi_sd0 to sd3). sw1 is the bootsel button, pulls qspi_ss to select flash bootrom mode on boot.
 
## files
 
- pcb_design, kicad project, schematic and board layout
- production, gerbers and fab outputs ready to send out
- gerber.zip, zipped gerbers for ordering
- readme.md, this file

## getting started

just plug it in.

plug usb_c into your computer. it should show up as a usb device. download the rp2040 sdk or use the arduino ide with the rp2040 board package installed.

if you want to load firmware, hit the bootsel button (sw1) while plugging in usb or while pressing reset. this puts the board into bootloader mode and a new drive shows up on your computer. drag your .uf2 file onto it and you're done.

if you want to use the swd header for debugging, you need a debugger (picoprobe, j-link, whatever you have). the header is swclk, swdio, and gnd. connect them and you can step through code with gdb.

the two leds on gpio2 and gpio3 blink by default on boot so you know it's working. the two buttons on gpio4 and gpio5 are yours to do whatever with.

all 30 gpio pins are on the gpioa and gpiob headers so you can break out whatever you need. power headers have gnd, 3v3, and 5v if you're powering other stuff.

## status
 
ready to buy from jlcpcb, waiting on HC grant card

## pictures

<img width="4000" height="auto" alt="image" src="https://github.com/user-attachments/assets/f6cee3b5-ba18-4dc4-8d5f-515fc8583687" />
<img width="4000" height="auto" alt="image" src="https://github.com/user-attachments/assets/8cdeff5a-7641-427f-8762-d7c6319703e3" />
<img width="4000" height="auto" alt="image" src="https://github.com/user-attachments/assets/05668771-2855-4777-89d4-3b7bf1a5aacf" />
<img width="4000" height="auto" alt="image" src="https://github.com/user-attachments/assets/705a63e4-4e88-4b53-9f6c-20467da256ab" />

## Bill of Materials

| Component | Value | Qty | Footprint | LCSC Part # | Link | Unit Cost | Total |
|-----------|-------|-----|-----------|-------------|------|-----------|-------|
| C1-C8, C11, C12, C17 | 0.1µF | 11 | 0402 | C1525 | [LCSC](https://www.lcsc.com/product-detail/C1525.html?s_z=n_q_C1525&globalKeyword=C1525) | $0.0055 | $0.0605 |
| C9, C10 | 1µF | 2 | 0402 | C52923 | [LCSC](https://www.lcsc.com/product-detail/C52923.html?s_z=n_q_C52923&globalKeyword=C52923) | $0.0126 | $0.0252 |
| C13, C14 | 10µF | 2 | 0603 | C19702 | [LCSC](https://www.lcsc.com/product-detail/C19702.html?s_z=n_q_C19702&globalKeyword=C19702) | $0.0391 | $0.0782 |
| C15, C16 | 33pF | 2 | 0402 | C1562 | [LCSC](https://www.lcsc.com/product-detail/C1562.html?s_z=n_q_C1562&globalKeyword=C1562) | $0.0072 | $0.0144 |
| GPIO2, GPIO3 | LED | 2 | 0805 | C2297 | [LCSC](https://www.lcsc.com/product-detail/C2297.html?s_z=n_q_C2297&globalKeyword=C2297) | $0.0163 | $0.0326 |
| GPIO4, GPIO5, RUN1, SW1 | SW_Push | 4 | Alps SKRK | C720477 | [LCSC](https://www.lcsc.com/product-detail/C720477.html?s_z=n_q_C720477&globalKeyword=C720477) | $0.0531 | $0.2124 |
| J1 | USB-C Receptacle | 1 | HRO TYPE-C-31-M-12 | C165948 | [LCSC](https://www.lcsc.com/product-detail/C165948.html?s_z=n_q_C165948&globalKeyword=C165948) | $0.1716 | $0.1716 |
| J2 | GPIO Bank B | 1 | 1x11 Pin Socket | C124407 | [LCSC](https://www.lcsc.com/product-detail/C124407.html?s_z=n_q_C124407&globalKeyword=C124407) | $0.2734 | $0.2734 |
| J4 | GPIO Bank A | 1 | 1x18 Pin Socket | C124410 | [LCSC](https://www.lcsc.com/product-detail/C124410.html?s_z=n_q_C124410&globalKeyword=C124410) | $0.367 | $0.367 |
| J5 | Debug | 1 | 1x3 Pin Socket | C49257 | [LCSC](https://www.lcsc.com/product-detail/C49257.html?s_z=n_q_C49257&globalKeyword=C49257) | $0.0272 | $0.0272 |
| J6 | Power | 1 | 1x5 Pin Socket | C124414 | [LCSC](https://www.lcsc.com/product-detail/C124414.html?s_z=n_q_C124414&globalKeyword=C124414) | $0.1323 | $0.1323 |
| J8 | GND Line | 1 | 1x10 Pin Socket | C124407 | [LCSC](https://www.lcsc.com/product-detail/C124407.html?s_z=n_q_C124407&globalKeyword=C124407) | $0.2734 | $0.2734 |
| J9 | 3V3 Line | 1 | 1x10 Pin Socket | C124407 | [LCSC](https://www.lcsc.com/product-detail/C124407.html?s_z=n_q_C124407&globalKeyword=C124407) | $0.2734 | $0.2734 |
| J11 | 5V Line | 1 | 1x10 Pin Socket | C124407 | [LCSC](https://www.lcsc.com/product-detail/C124407.html?s_z=n_q_C124407&globalKeyword=C124407) | $0.2734 | $0.2734 |
| R1, R2 | 5.1K | 2 | 0402 | C25905 | [LCSC](https://www.lcsc.com/product-detail/C25905.html?s_z=n_q_C25905&globalKeyword=C25905) | $0.0043 | $0.0086 |
| R9, R10 | 220Ω | 2 | 0402 | C25091 | [LCSC](https://www.lcsc.com/product-detail/C25091.html?s_z=n_q_C25091&globalKeyword=C25091) | $0.0062 | $0.0124 |
| R3, R4 | 22Ω | 2 | 0402 | C25092 | [LCSC](https://www.lcsc.com/product-detail/C25092.html?s_z=n_q_C25092&globalKeyword=C25092) | $0.007 | $0.014 |
| R5, R7 | 1K | 2 | 0402 | C11702 | [LCSC](https://www.lcsc.com/product-detail/C11702.html?s_z=n_q_C11702&globalKeyword=C11702) | $0.0067 | $0.0134 |
| R6, R8, R11 | 10K | 3 | 0805 | C17414 | [LCSC](https://www.lcsc.com/product-detail/C17414.html?s_z=n_q_C17414&globalKeyword=C17414) | $0.0056 | $0.0168 |
| U1 | RP2040 | 1 | QFN-56 | C2040 | [LCSC](https://www.lcsc.com/product-detail/C2040.html?s_z=n_q_C2040&globalKeyword=C2040) | $0.993 | $0.993 |
| U2 | MCP1700x-330 | 1 | SOT-23 | C5446 | [LCSC](https://www.lcsc.com/product-detail/C5446.html?s_z=n_q_C5446&globalKeyword=C5446) | $0.1362 | $0.1362 |
| U3 | W25Q128JVS | 1 | SOIC-8 | C97521 | [LCSC](https://www.lcsc.com/product-detail/C97521.html?s_z=n_q_C97521&globalKeyword=C97521) | $2.5773 | $2.5773 |
| Y2 | 12MHz Crystal | 1 | 3225 4-Pin | C9002 | [LCSC](https://www.lcsc.com/product-detail/C9002.html?s_z=n_q_C9002&globalKeyword=C9002) | $0.0953 | $0.0953 |

**Total Components:** 72  
**Estimated Build Cost:** $48.28 USD

**made for macondo**
