---
title: "Pokemon Devboard"
author: "sahil"
description: "RP2040 development board inspired by Arduino shape with Pokémon theming"
created_at: "2026-05-25"
---

# May 25: the idea

For the idea, I wanted to create a custom devboard because I thought that was cool. I didn't know how to so I will follow a guide on Macondo. Imma choose a Pokémon theme because i love Pokémon (obviously).  

<img width="auto" height="100" alt="image" src="https://github.com/user-attachments/assets/3cbe6a23-e43c-493f-a6a6-adc041553250" />

**Total time spent: 0 hours**

# May 25: Started the schematic

after a meeting with a macondo guide, i read the room and saw that most of it was: see raspberry pi pico, find that part datasheet, put it in schematic. so imma leave the guide and do it myself... here is the RP2040 with the decoupling caps. these are needed to stabilize voltage and reduce high-frequency noise

<img width="auto" height="300" alt="image" src="https://github.com/user-attachments/assets/22aa71e9-48b1-4716-9dfa-0390b4d5f37e" />

**Total time spent: 2 hour**

# May 25: working on schematic

firstly, the usb is needed to get power to the stuff. next, we have the buttons and leds that are meta with custom devboards. and lastly, we have our crystal and SDI for flash memory and the crystal for a clock. I had to go to the websites to find the datasheets. i was easily able to find these after searching up the par

<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/1aaf2cbf-63c7-464f-8847-2caafef26c5b" />
<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/320588f0-4d00-4a62-9292-6443f04d2783" />
<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/60a0bef5-4c86-47ca-a3f0-d608cb68041d" />


**Total time spent: 4 hours**

# May 26: Finished with the Schematic!!

i realized I also need header pins so here they are. Additionally, I added those cool blue boxes for labeling the parts and stuff. here is the finished design

<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/8f7039d1-e88a-46c3-8e39-636df7d655f1" />
<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/f2eac987-1a57-4136-b9a0-90d6c487350d" />
<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/4f956411-a2e5-4651-a2fb-0f104709f902" />

**Total time spent: 2 hour**

# May 26: placed parts!

now that i finished assigning parts, i also finished placing all my parts on the board. this was simple bc i js looked at a pico i have at my desk and put stuff so it looks like a normal pico. 

<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/3aadccd5-2912-41ef-a039-16236b878461" />

**Total time spent: 1.5 hours**

# May 26: Wiring is painful

tried an autorouter called freerouting to save time but it made a mess, traces crossing weird and not respecting spacing, so i scrapped that and did it all by hand instead. the hard part isn't drawing the traces, it's keeping enough space for everything, keeping a consistent style across the board, and not wasting space i'll want later for the copper pour

<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/407353ee-8303-4a07-afd9-f74bb938ed5a" />


As I said, finished routing by hand after freerouting failed. No ratlines left which means every net is connected. next up is fixing drc errors and adding the silkscreen art, still not sure if that or the hand soldering later will be the bigger pain

to reiterate, ive been thinking about whether i even want to hand solder this myself, my desk isn't protected with a silicone mat right now so if i get funding for the board i'll probably grab soldering gear and a mat before touching an iron to it

that was very hard. i dont know how the makers of the raspberry pi pico did it. i think that a bigger board will make this hella easy

no ratlines and done routing

<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/e7f2773a-fe1c-4ef4-a86e-ea46951e361c" />
<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/e9172025-360a-4284-8a92-b46fb07ff882" />

**Total time spent: 6 hours**

# May 27: Done!!!!!

made a pikachu banner in canva, happy with how it came out. finished the drc cleanup and silkscreen after that, uploaded everything to github, and pulled a quote from jlcpcb so i know roughly what this is going to cost

<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/d3968e35-9d48-4b55-8a9a-00275af9c7c5" />
<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/681ddbbd-b1af-4e96-821e-c622d356d686" />

**Total time spent: 1.5 hours**

# Jun 20: Submitting for funding (close)

swapped the w25q128jveiq flash chip to a bigger footprint because the smaller package wasn't in stock on jlcpcb, and an out of stock part would've held up the whole order. the bom ballooned because of that so i'm going through it to trim cost back down. i had to reformat my bom becuase the one on kicad sucks bc jlcpcb doesnt requires a different format.

<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/20809ff9-a5c4-4be4-9d1f-1cdccd9cd142" />

**Total time spent: 1 hour **

# Jul 10: deciding to redesign

while i did say i was close to submitting for funding, that was the bad design that i dont like. i am redesigning rn. okay after a long side quest i am back to this devboard. i was thinking that picos are just too basic and the board i have rn is really similar to a normal rpp. imma make a arduino.

<img width="auto" height="400" alt="image" src="https://github.com/user-attachments/assets/41b05231-599b-4d79-be53-d29f78c2d538" />




**Total time spent: 0.5 hours**

# Jul 11: goal

arduinos are the most beginner friendly boards out there but the mcu itself is pretty weak compared to something like the rp2040 on a pico. so the idea here is to get the best of both, pico level performance with the arduino form factor people already know

started by taking a pico and adding female header pins plus gnd and 3v3 rails, similar to how arduino prototype shields are laid out. next revision i want to organize the pinout more clearly, gpios grouped together, grounds grouped together, so it reads more like a real arduino shield than a breakout board

i may also add some extra stuff... stay tuned to find out!

<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/118fac76-dfcf-4ca4-9a07-4032beb75f1f" />

**Total time spent: 2 hours**

# Jul 14: 2 designs

landed on two directions, one that looks like a pico breakout and one that looks like an arduino. tried to keep traces neat on both, but i'm leaning toward the arduino looking one since that was the whole point of this board, familiarity for people who already know arduino pinouts. i found the arduino template board on github and i kinda like it but the corners are pretty sharp.

both still need small cleanup like silkscreen before either is final

<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/a5f092ab-8096-48fc-8b21-b0deb7822a93" />
<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/9b0bb110-bc54-4629-8c4f-89b0a2076d06" />

**Total time spent: 6 hours**

# Jul 14: adding stuff and making it cleaner

picked the arduino style design and cleaned it up further. main thing left is fabrication and production, though i might still add a couple more features if i think of something worth the extra bom cost

got production numbers together. found that setting jlcpcb to only assemble 2 of the 5 boards instead of all 5 saves about $20, since i don't need every panel populated right now and can hand solder the rest later if i want more.

for the changes i added: i rounded the corners on the arduino so it looks better, i added test pads on the left, i added power rails on the left, and i added hella tuff silkscreen.

<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/8ec79a6e-3df3-461f-8776-14abd8e2b334" />
<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/9870fcdf-9a4a-44a7-a368-88ef388af355" />
<img width="auto" height="200" alt="image" src="https://github.com/user-attachments/assets/46b8f4dd-66d3-4608-844f-181c62d310f4" />

**Total time spent: 4 hours**

# Aug 17: made it ready for more production

did my bom (this may not be in the hackatime lapses idk im not really sure). this costs alot more than when i look int july so im just gonna buy stmg from the forge shop instead of buying the board. also the forge has its own special bom format so i have one in ignore/ for the bom i will upload for jlcpcb and one in procution/ that is the one for forge.


<img width="auto" height="400" alt="image" src="https://github.com/user-attachments/assets/8d5020f6-3b23-46f5-8344-bd91795a2f9d" />

**Total time spent: 2 hours**
