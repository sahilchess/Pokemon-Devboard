---
title: "Pikachu Devboard"
author: "sahil"
description: "RP2040 development board inspired by Arduino shape with Pokémon theming"
created_at: "2026-05-25"
---

# May 25: Started The Pikachu Devboard

got the project going today. decided on pokémon as the theme for this whole build

**Total time spent: 0.5 hours**

# May 25: Hackatime???

hackatime isn't working so just doing journals instead. here's what i have so far after reading through the guide and picking the theme

**Total time spent: 1 hour**

# May 26: Finished with the Schematic!!

the tutorial is soooooo helpful. like crazy helpful. it goes so in depth on why things are things and super descriptive on what is happening. i love how organized the schematic is and i understand and learned so much because of it. note that hackatime wasn't tracking for part of this so it says 2h total

**Total time spent: 2 hours**

# May 26: YAY!

finished up the schematic and put everything in place on the pcb. now all that is left is to route

**Total time spent: 0.5 hours**

# May 26: Wiring is painful

the art of wiring is hard. wiring is defined as "to install electrical connections". pain is defined as "a profoundly unpleasant subjective experience characterized by intense suffering, negative self perception, and a disrupted sense of self". they sound the same. they feel the same anyway

i tried using an autorouter called freerouter but it failed very badly. now i have to do it all by hand. but i am excited to do the copper pour for gnd. the hard parts are making sure there is space for everything and maintaining a consistent style, and also not wasting space

**Total time spent: 1 hour**

# May 26: Done with routing

that was true pain. it never ended. tomorrow i have to fix up the drc and add the art, but at least the pain is done (foreshadowing). idk really if the drc fixing will be harder than the pain. i might hand solder it, idk yet. i'm kinda scared bc my desk isn't protected with a silicone mat. if i get a grant to buy the board and buy soldering stuff, then i probably will hand solder

**Total time spent: 0.1 hours**

# May 27: Done!!!!!

i made a banner for the pikachu in canva and i really like it

then i finished the entire drc and silkscreen. i really want to get this in person. i'm so excited. i also uploaded everything to github and got the quote from jlcpcb

**Total time spent: 0.5 hours**

# May 27: Decisions

when i was making some polishes for my design, i realized that my total funding would be super high. i did it through the macondo calc and it said that $120 was 27 hrs. even if i just got a hotplate, flux, and solder paste, it would be 8 hours. i thought very hard on this and came to the conclusion that it isn't necessary and i could hand solder it a different day if i really wanted to

**Total time spent: 0.2 hours**

# Jun 20: Submitting for funding (close)

i changed the w25q128jveiq to a bigger footprint because the smaller one was not available on jlcpcb. the bom is pretty expansive so imma try to make it less

**Total time spent: 0.5 hours**

# Jun 21: BOM

this was pretty tricky getting the bom cheaper, but i got it done. originally it used to be $80 but i and claude and gemini made the bom $44. total is $51 with tax and yeah, im done

**Total time spent: 0.5 hours**

# Jul 11: goal

now here is a cool thing. i love arduinos, but arduinos is a really horrible mcu. like raspberry pi picos are sooo much better. but arduinos are so beginner friendly. what if we combined them

here we are. i made a pi pico with female header pins and gnd and 3v3 lines inspired by the prototype shields for arduino

i am gonna try a new design with more organized pins like gpios here gnds here etc. it will look more like an arduino but with an rp2040

**Total time spent: 0.5 hours**

# Jul 14: 2 designs

alr so im kinda done with both designs. i have a pico looking design and an arduino looking design. lapse randomly stopped recording. here are the designs

both are obvi not done still needs some minor improvements like silkscreen. i tried to make the traces very neat where i could. the arduino one is what im leaning towards

**Total time spent: 2 hours**

# Jul 14: quite close!

here we are. very close now all we need is fabrication and production. i may add more stuff idk yet

**Total time spent: 0.5 hours**

# Jul 15: production

i liked how this turned out. i hope this gets approved. i found that if you make them only assemble 2 of the 5 pcbs it is $20 cheaper

**Total time spent: 0.5 hours**

# Aug 17: made it ready for more production

got the board ready to start producing more units

**Total time spent: 1 hour**

# Aug 18: Submitted Ship 1 for review

after a month in the queue, i got rejected for not having a bom.csv. added the bom.csv and updated my readme with why i made it, getting started, and a bom image

made it ready for more production

**Total time spent: 1 hour**

# Aug 20: Migrating from Macondo to Forge

moving the project over to forge because i like how i can submit design review directly in forge

**Total time spent: 0.5 hours**
