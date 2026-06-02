# [The Pikachu — A Pokemon Devboard](https://kicanvas.org/?repo=https%3A%2F%2Fgithub.com%2Fsahilchess%2FThe-Pikachu-Devboard%2Fblob%2Fmain%2FPCD_DESIGN%2FPokemon%2520Devboard.kicad_pro)

A custom RP2040-based devboard inspired by Pikachu, designed in KiCad.

![image](https://user-cdn.hackclub-assets.com/019e6a41-a0c9-72ff-a453-7fc2e9fa08f6/The%20Pikachu%20V1.0.0%20(1).png)

## Project overview

This repository contains the complete hardware design and production outputs for the board:

- Schematic and PCB source files (KiCad)
- Gerber/drill/fabrication files for manufacturing
- Pick-and-place and BOM-style output files

## Hardware at a glance

- **MCU:** Raspberry Pi **RP2040**
- **USB:** USB Type-C (USB 2.0 receptacle)
- **Flash:** W25Q128JVS external SPI flash
- **Regulator:** MCP1700 3.3V LDO
- **Clock:** 4-pin crystal with external load capacitors
- **User input:** Push button
- **Built-in Button** Push Button
- **Built-in LED** Just like the cool kids

## Repository structure

- `/PCB_DESIGN`  
  KiCad source files:
  - `Pokemon Devboard.kicad_sch`
  - `Pokemon Devboard.kicad_pcb`
  - `Pokemon Devboard.kicad_pro`

- `/production`  
  Uncompressed manufacturing outputs (Gerbers, drill files, BOM/position files, ODB package).

- `PRODUCTION.zip`  
  Zipped production package for fabrication upload.

## Pictures
<img width="1121" height="769" alt="image" src="https://github.com/user-attachments/assets/65c20d34-b1eb-4131-a6ce-ca79fec8d8f4" />

<img width="346" height="858" alt="image" src="https://github.com/user-attachments/assets/cc9cbd69-f218-4c7d-9662-d472e77facae" />

<br>
<img width="500" height="1152" alt="image" src="https://github.com/user-attachments/assets/5d9a5d58-773c-412d-ba85-abe20fdcf6a6" />

<img width="500" height="1152" alt="image" src="https://github.com/user-attachments/assets/86c37884-b516-41c5-99f2-29ca74552a21" />



## Made for Macondo!
https://macondo.hackclub.com/projects/6075
