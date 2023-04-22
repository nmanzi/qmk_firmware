# SiCK-68 for RP2040

![sick68](https://cdn.thingiverse.com/renders/f2/af/c2/ce/e6/11b1601df06621e69068389e4fb0d943_preview_featured.JPG)

The SiCK-68 is a custom 3D printed mechanical keyboard built from scratch without the price tag often 
associated with one. It uses the Tada68 layout and a Raspberry Pi Pico as a microcontroller.

This iteration also supports the use of WS2812 RGB LEDs as a RGB Matrix for backlighting.

* Keyboard Maintainer: [umbynos](https://github.com/umbynos)
* Hardware Supported: Arduino Pro Micro
* Hardware Availability: [files to print and documentation](https://www.thingiverse.com/thing:3478494)

Make example for this keyboard (after setting up your build environment):

    make nmanzi/sick68:via

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Wiring
### Key Wiring
![Key Wiring](https://imgur.com/a0wZH4A.png)

### RP2040 Wiring
![Wiring Diagram](https://imgur.com/SdaRIy6.png)

## Todo List
- Map out the RGB Matrix properly

## Thanks
This borrows heavily from the great work done by [umbynos](https://github.com/umbynos) on the handwired/sick68 firmware.
