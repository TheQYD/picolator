## Picolator
A portable console for [Pico 8] (http://www.lexaloffle.com/pico-8.php).   

![(Picolator Complete](photos/picolator_complete.jpg?raw=true "Picolator")

## Details
Picolator is a portable console developed using the Raspberry Pi Zero. It's shell and circuits are made using the [Othermill](https://othermachine.co). 

The shell is 4 layers. Three HDPE layers, a double-sided copper clad FR1 circuit, and a polycarbonate top layer (to protect the screen). The body was designed in Fusion 360, and the electronics were designed in EagleCAD. All of them were milled using the Othermill. I had to use a Dremel to remove the headers on the PiTFT (risky, but it needed to be thinner).

Anyone with experience in milling and circuit design should be able to make it from just the files. I'll put together an Instructable soon.

## Parts
- 1 [Raspberry Zero] (https://www.adafruit.com/product/2885)
- 1 [Teensy 3.2] (https://www.pjrc.com/store/teensy32.html)
- 1 [Adafruit 3.5” PiTFT] (https://www.adafruit.com/products/2097)
- 1 [LM386 Audio Amplifier] (http://www.digikey.com/product-detail/en/texas-instruments/LM386N-4-NOPB/296-43960-5-ND/148192)
- 1 [Adafruit PowerBoost 500c] (https://www.adafruit.com/product/1944)
- 1 [3.7v 2500mAh LiPo battery] (https://www.adafruit.com/products/328)
- 1 [2.5mm headphone jack] (https://www.amazon.com/uxcell-Plastic-Stereo-Socket-Connector/dp/B00GLQAF7A/ref=pd_sim_23_4/151-6327110-2786334?_encoding=UTF8&pd_rd_i=B00GLQAF7A&pd_rd_r=0DZXJB3YZX57Q64PYSKV&pd_rd_w=IB4NA&pd_rd_wg=bLT86&psc=1&refRID=0DZXJB3YZX57Q64PYSKV)
- 1 [sheet of 4” x 3” x .375” polycarbonate] (https://othermachine.co/store/materials/polycarbonate/)
- 2 [sheets of 4” x 3” x .375” HDPE] (https://othermachine.co/store/materials/hdpe/)
- 1 [sheet of 4” x 3” copper clad FR-1](https://othermachine.co/store/materials/pcb)
- Misc: resistors, capacitors, switch, etc.


## Media
A video it it in action can be found [here](https://youtu.be/5mOcTelc-4U).

The front.

![Front](photos/picolator_front.jpg?raw=true "Picolator")

The back.

![Back](photos/picolator_back.jpg?raw=true "Picolator")

I use it all the time.

![PLaying](photos/picolator_rainmaker.jpg?raw=true "Picolator")

Here are it's insides. I was breadboarding it.

![Breadboarding](photos/breadboarding_console.jpg?raw=true "Picolator")

This is the soundboard. It uses an LM386. I designed the circuit, but the Pi Zero audio output work can be found [here](
https://learn.adafruit.com/introducing-the-raspberry-pi-zero/audio-outputs).

![Soundboard](photos/soundboard_closeup.jpg?raw=true "Picolator")

The schematic for the soundboard is in the CADs folder, but here's an image of it.

![You actually read these?](photos/console_sound_board.png?raw=true "Picolator")

This is the controller. It connects to the Teensy and the Teensy is then connected via USB to the Pi Zero.

![There is nothing here.](photos/controller_bare.jpg?raw=true "Picolator")

This is a screenshot of the controller circuit. It's also in the CADs file.

![This statement has no meaning. ](photos/controller_circuit.png?raw=true "Picolator")

## License
Picolator is available under the MIT license. See the LICENSE file for more info.
