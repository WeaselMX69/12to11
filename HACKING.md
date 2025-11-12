# Local build (Ubuntu/Mint)
If `shaders.h` generation fails:
sudo apt install -y libxi-dev libxkbfile-dev libpixman-1-dev libdrm-dev libxpresent-dev gawk xorg-dev
make clean && make \
  CFLAGS+=" -include local_overrides/shaders_fallback.h $(pkg-config --cflags xi xkbfile pixman-1 libdrm xpresent)" \
  LDFLAGS+=" $(pkg-config --libs   xi xkbfile pixman-1 libdrm xpresent)"

Maintained with respect for the original 12to11 authors and contributors.
Added Ubuntu/Mint build fixes by Creator (WeaselMX69 / laison.org).
