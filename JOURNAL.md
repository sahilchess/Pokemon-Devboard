---
title: "Pikachu Devboard"
author: "sahil"
description: "RP2040 development board inspired by Arduino shape with Pokémon theming"
created_at: "2026-05-25"
---

# May 25: Hackatime???

hackatime isn't working so just doing journals instead. here's what i have so far after reading through the guide and picking the theme

<img width="560" height="510" alt="image" src="https://github.com/user-attachments/assets/22aa71e9-48b1-4716-9dfa-0390b4d5f37e" />

**Total time spent: 1 hour**

# May 26: Finished with the Schematic!!

the tutorial is soooooo helpful. like crazy helpful. it goes so in depth on why things are things and super descriptive on what is happening. i love how organized the schematic is and i understand and learned so much because of it. note that hackatime wasn't tracking for part of this so it says 2h total

<img width="587" height="566" alt="image" src="https://github.com/user-attachments/assets/8f7039d1-e88a-46c3-8e39-636df7d655f1" />
<img width="566" height="389" alt="image" src="https://github.com/user-attachments/assets/f2eac987-1a57-4136-b9a0-90d6c487350d" />
<img width="561" height="387" alt="image" src="https://github.com/user-attachments/assets/4f956411-a2e5-4651-a2fb-0f104709f902" />


**Total time spent: 2 hours**

# May 26: YAY!

finished up the schematic and put everything in place on the pcb. now all that is left is to route

<img width="338" height="750" alt="image" src="https://github.com/user-attachments/assets/3aadccd5-2912-41ef-a039-16236b878461" />

**Total time spent: 0.5 hours**

# May 26: Wiring is painful

the art of wiring is hard. wiring is defined as "to install electrical connections". pain is defined as "a profoundly unpleasant subjective experience characterized by intense suffering, negative self perception, and a disrupted sense of self". they sound the same. they feel the same anyway

i tried using an autorouter called freerouter but it failed very badly. now i have to do it all by hand. but i am excited to do the copper pour for gnd. the hard parts are making sure there is space for everything and maintaining a consistent style, and also not wasting space

<img width="314" height="663" alt="image" src="https://github.com/user-attachments/assets/407353ee-8303-4a07-afd9-f74bb938ed5a" />

**Total time spent: 1 hour**

# May 26: Done with routing

that was true pain. it never ended. tomorrow i have to fix up the drc and add the art, but at least the pain is done (foreshadowing). idk really if the drc fixing will be harder than the pain. i might hand solder it, idk yet. i'm kinda scared bc my desk isn't protected with a silicone mat. if i get a grant to buy the board and buy soldering stuff, then i probably will hand solder
## no ratlines
<img width="329" height="763" alt="image" src="https://github.com/user-attachments/assets/e7f2773a-fe1c-4ef4-a86e-ea46951e361c" />

## done routing
<img width="338" height="772" alt="image" src="https://github.com/user-attachments/assets/e9172025-360a-4284-8a92-b46fb07ff882" />


**Total time spent: 0.1 hours**

# May 27: Done!!!!!

i made a banner for the pikachu in canva and i really like it
<img width="569" height="291" alt="image" src="https://github.com/user-attachments/assets/d3968e35-9d48-4b55-8a9a-00275af9c7c5" />

then i finished the entire drc and silkscreen. i really want to get this in person. i'm so excited. i also uploaded everything to github and got the quote from jlcpcb
<img width="576" height="211" alt="image" src="https://github.com/user-attachments/assets/681ddbbd-b1af-4e96-821e-c622d356d686" />

**Total time spent: 0.5 hours**

# May 27: Decisions

when i was making some polishes for my design, i realized that my total funding would be super high. i did it through the macondo calc and it said that $120 was 27 hrs. even if i just got a hotplate, flux, and solder paste, it would be 8 hours. i thought very hard on this and came to the conclusion that it isn't necessary and i could hand solder it a different day if i really wanted to
<img width="577" height="529" alt="image" src="https://github.com/user-attachments/assets/45f07c31-0278-41b2-beb0-6aa3612d4ac2" />


**Total time spent: 0.01 hours**

# Jun 20: Submitting for funding (close)

i changed the w25q128jveiq to a bigger footprint because the smaller one was not available on jlcpcb. the bom is pretty expansive so imma try to make it less
<img width="584" height="213" alt="image" src="https://github.com/user-attachments/assets/20809ff9-a5c4-4be4-9d1f-1cdccd9cd142" />
**Total time spent: not tracked**

# Jun 21: BOM

this was pretty tricky getting the bom cheaper, but i got it done. originally it used to be $80 but i and claude and gemini made the bom $44. total is $51 with tax and yeah, im done
<img width="581" height="608" alt="image" src="https://github.com/user-attachments/assets/c2fac6a4-6fa5-4b36-aaf9-90d522e0065a" />

**Total time spent: not tracked**

# Jul 11: goal

now here is a cool thing. i love arduinos, but arduinos is a really horrible mcu. like raspberry pi picos are sooo much better. but arduinos are so beginner friendly. what if we combined them

here we are. i made a pi pico with female header pins and gnd and 3v3 lines inspired by the prototype shields for arduino

i am gonna try a new design with more organized pins like gpios here gnds here etc. it will look more like an arduino but with an rp2040
img width="565" height="518" alt="image" src="https://github.com/user-attachments/assets/118fac76-dfcf-4ca4-9a07-4032beb75f1f" />

**Total time spent: not tracked**

# Jul 14: 2 designs

alr so im kinda done with both designs. i have a pico looking design and an arduino looking design. lapse randomly stopped recording. here are the designs

both are obvi not done still needs some minor improvements like silkscreen. i tried to make the traces very neat where i could. the arduino one is what im leaning towards

<img width="562" height="636" alt="image" src="https://github.com/user-attachments/assets/a5f092ab-8096-48fc-8b21-b0deb7822a93" />
<img width="570" height="377" alt="image" src="https://github.com/user-attachments/assets/9b0bb110-bc54-4629-8c4f-89b0a2076d06" />


**Total time spent: 2 hours**

# Jul 14: quite close!

here we are. very close now all we need is fabrication and production. i may add more stuff idk yet
<img width="565" height="373" alt="image" src="https://github.com/user-attachments/assets/8ec79a6e-3df3-461f-8776-14abd8e2b334" />

**Total time spent: not tracked**

# Jul 15: production

i liked how this turned out. i hope this gets approved. i found that if you make them only assemble 2 of the 5 pcbs it is $20 cheaper
<img width="564" height="417" alt="image" src="https://github.com/user-attachments/assets/9870fcdf-9a4a-44a7-a368-88ef388af355" />
<img width="572" height="555" alt="image" src="https://github.com/user-attachments/assets/46b8f4dd-66d3-4608-844f-181c62d310f4" />

**Total time spent: not tracked**

# Aug 17: made it ready for more production

after a month in the queue, i got rejected for not having a bom.csv. added the bom.csv and updated my readme with why i made it, getting started, and a bom image
<img width="577" height="281" alt="image" src="https://github.com/user-attachments/assets/ee7a356d-3192-472e-a304-b2a3b9903c9f" />

**Total time spent: 1 hour**
