# octoTron
Polyphonic Teensy 3.6 Synthesizer with MIDI Control
### This project implement a Teensy 3.6 based Synthesizer with two MIDI inputs.
The Synthesizer has the following characteristics:
* eight voices
* two LFO (sine,sawtooth,square,triangle) per voice
* two VCO (sine,sawtooth,square,triangle) per voice
* one 12dB filter (lowpass,highpass,bandpass) per voice
* one AHDSR generator per voice
* one MIDI input for a MIDI keyboard
* one MIDI input for a MIDI controller like https://github.com/ErikDorstel/midiKnobs
The project uses the Teensy Audio Library to implement the synthesizer components like VCO, LFO ... . This graphic shows the connections of the components used.
![](https://raw.githubusercontent.com/ErikDorstel/octoTron/master/documentation/ADT%20schematic.png)
