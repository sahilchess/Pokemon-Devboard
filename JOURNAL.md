---
title: "Pikachu Devboard"
author: "sahil"
description: "RP2040 development board inspired by Arduino shape with Pokémon theming"
created_at: "2026-05-25"
---

# May 25: Hackatime???

hackatime isn't working so just doing journals instead. picked the pokemon theme because i wanted something more fun than a plain dev board and figured a pikachu skin would make people actually want to pick it up

<img width="560" height="510" alt="image" src="https://github.com/user-attachments/assets/22aa71e9-48b1-4716-9dfa-0390b4d5f37e" />

**Total time spent: 1 hour**

# May 26: Finished with the Schematic!!

went through the tutorial and it explained the why behind every part choice so well that i actually understood what i was placing instead of just copying blindly. that mattered a lot here since this is my first real rp2040 board and i didn't want to just cargo cult a reference schematic without knowing what each section does

<img width="587" height="566" alt="image" src="https://github.com/user-attachments/assets/8f7039d1-e88a-46c3-8e39-636df7d655f1" />
<img width="566" height="389" alt="image" src="https://github.com/user-attachments/assets/f2eac987-1a57-4136-b9a0-90d6c487350d" />
<img width="561" height="387" alt="image" src="https://github.com/user-attachments/assets/4f956411-a2e5-4651-a2fb-0f104709f902" />

hackatime wasn't tracking for part of this so the total below is off, actual time was closer to 2 hours

**Total time spent: 2 hours**

# May 26: YAY!

schematic is done and everything is placed on the pcb. left placement loose for now since routing will probably force me to shuffle a few parts around anyway. all that's left is routing

<img width="338" height="750" alt="image" src="https://github.com/user-attachments/assets/3aadccd5-2912-41ef-a039-16236b878461" />

**Total time spent: 0.5 hours**

# May 26: Wiring is painful

tried an autorouter called freerouting to save time but it made a mess, traces crossing weird and not respecting spacing, so i scrapped that and did it all by hand instead. the hard part isn't drawing the traces, it's keeping enough space for everything, keeping a consistent style across the board, and not wasting space i'll want later for the copper pour

<img width="314" height="663" alt="image" src="https://github.com/user-attachments/assets/407353ee-8303-4a07-afd9-f74bb938ed5a" />

**Total time spent: 1 hour**

# May 26: Done with routing

finished routing by hand after freerouting failed. no ratlines left which means every net is connected. next up is fixing drc errors and adding the silkscreen art, still not sure if that or the hand soldering later will be the bigger pain

also been thinking about whether i even want to hand solder this myself, my desk isn't protected with a silicone mat right now so if i get funding for the board i'll probably grab soldering gear and a mat before touching an iron to it

no ratlines
<img width="329" height="763" alt="image" src="https://github.com/user-attachments/assets/e7f2773a-fe1c-4ef4-a86e-ea46951e361c" />

done routing
<img width="338" height="772" alt="image" src="https://github.com/user-attachments/assets/e9172025-360a-4284-8a92-b46fb07ff882" />

**Total time spent: 0.1 hours**

# May 27: Done!!!!!

made a pikachu banner in canva for the silkscreen, happy with how it came out. finished the drc cleanup and silkscreen after that, uploaded everything to github, and pulled a quote from jlcpcb so i know roughly what this is going to cost

<img width="569" height="291" alt="image" src="https://github.com/user-attachments/assets/d3968e35-9d48-4b55-8a9a-00275af9c7c5" />
<img width="576" height="211" alt="image" src="https://github.com/user-attachments/assets/681ddbbd-b1af-4e96-821e-c622d356d686" />

**Total time spent: 0.5 hours**

# May 27: Decisions

ran the numbers through the macondo calc to see what hand soldering gear would actually cost in hours, not just dollars. $120 for a hotplate, flux, and solder paste worked out to 27 hours, and even a bare minimum hotplate only setup was still 8 hours. sat with that for a bit and decided it wasn't worth eating that much of my budget right now, i can always hand solder it a different day if i still want to

<img width="577" height="529" alt="image" src="https://github.com/user-attachments/assets/45f07c31-0278-41b2-beb0-6aa3612d4ac2" />

**Total time spent: 0.01 hours**

# Jun 20: Submitting for funding (close)

swapped the w25q128jveiq flash chip to a bigger footprint because the smaller package wasn't in stock on jlcpcb, and an out of stock part would've held up the whole order. the bom ballooned because of that so i'm going through it to trim cost back down

<img width="584" height="213" alt="image" src="https://github.com/user-attachments/assets/20809ff9-a5c4-4be4-9d1f-1cdccd9cd142" />

**Total time spent: 0.1 hours**

# Jun 21: BOM

getting the bom cheaper was harder than i expected, mostly hunting for cheaper equivalents part by part without dropping to something that's not in stock. worked through it with claude and gemini going back and forth on part suggestions and got it from $80 down to $44, $51 after tax

<img width="581" height="608" alt="image" src="https://github.com/user-attachments/assets/c2fac6a4-6fa5-4b36-aaf9-90d522e0065a" />

**Total time spent: 0.1 hours**

# Jul 11: goal

arduinos are the most beginner friendly boards out there but the mcu itself is pretty weak compared to something like the rp2040 on a pico. so the idea here is to get the best of both, pico level performance with the arduino form factor people already know

started by taking a pico and adding female header pins plus gnd and 3v3 rails, similar to how arduino prototype shields are laid out. next revision i want to organize the pinout more clearly, gpios grouped together, grounds grouped together, so it reads more like a real arduino shield than a breakout board

<img width="565" height="518" alt="image" src="https://github.com/user-attachments/assets/118fac76-dfcf-4ca4-9a07-4032beb75f1f" />

**Total time spent: 0.1 hours**

# Jul 14: 2 designs

landed on two directions, one that looks like a pico breakout and one that looks like an arduino. lapse randomly stopped recording partway through so the time below is an underestimate. tried to keep traces neat on both, but i'm leaning toward the arduino looking one since that was the whole point of this board, familiarity for people who already know arduino pinouts

both still need small cleanup like silkscreen before either is final

<img width="562" height="636" alt="image" src="https://github.com/user-attachments/assets/a5f092ab-8096-48fc-8b21-b0deb7822a93" />
<img width="570" height="377" alt="image" src="https://github.com/user-attachments/assets/9b0bb110-bc54-4629-8c4f-89b0a2076d06" />

**Total time spent: 2 hours**

# Jul 14: quite close!

picked the arduino style design and cleaned it up further. main thing left is fabrication and production, though i might still add a couple more features if i think of something worth the extra bom cost

<img width="565" height="373" alt="image" src="https://github.com/user-attachments/assets/8ec79a6e-3df3-461f-8776-14abd8e2b334" />

**Total time spent: 0.1 hours**

# Jul 15: production

got production numbers together. found that setting jlcpcb to only assemble 2 of the 5 boards instead of all 5 saves about $20, since i don't need every panel populated right now and can hand solder the rest later if i want more

<img width="564" height="417" alt="image" src="https://github.com/user-attachments/assets/9870fcdf-9a4a-44a7-a368-88ef388af355" />
<img width="572" height="555" alt="image" src="https://github.com/user-attachments/assets/46b8f4dd-66d3-4608-844f-181c62d310f4" />

**Total time spent: 0.1 hours**

# Aug 17: made it ready for more production

after sitting in the queue for a month, it got rejected for not including a bom.csv, so i added that and updated the readme with why i built this board, a getting started section, and a bom image so anyone else looking at the repo actually understands what it is and how to use it

<img width="577" height="281" alt="image" src="https://github.com/user-attachments/assets/ee7a356d-3192-472e-a304-b2a3b9903c9f" />

**Total time spent: 1 hour**
