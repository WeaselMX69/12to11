/* Minimal GLSL fallbacks so egl.c compiles if shaders.h isn’t generated */
static const char *composite_rectangle_vertex_shader =
"attribute vec2 aPos; attribute vec2 aTex; varying vec2 vTex;"
"void main(){ vTex=aTex; gl_Position=vec4(aPos,0.0,1.0); }";
static const char *clear_rectangle_vertex_shader =
"attribute vec2 aPos;"
"void main(){ gl_Position=vec4(aPos,0.0,1.0); }";
static const char *clear_rectangle_fragment_shader =
"precision mediump float;"
"void main(){ gl_FragColor=vec4(0.0,0.0,0.0,0.0); }";
static const char *composite_rectangle_fragment_shader_rgba =
"precision mediump float; varying vec2 vTex; uniform sampler2D uTex;"
"void main(){ gl_FragColor=texture2D(uTex, vTex); }";
static const char *composite_rectangle_fragment_shader_rgbx =
"precision mediump float; varying vec2 vTex; uniform sampler2D uTex;"
"void main(){ vec4 c=texture2D(uTex, vTex); gl_FragColor=vec4(c.rgb,1.0); }";
static const char *composite_rectangle_fragment_shader_external =
"precision mediump float; varying vec2 vTex; uniform sampler2D uTex;"
"void main(){ gl_FragColor=texture2D(uTex, vTex); }";
static const char *composite_rectangle_fragment_shader_single_pixel =
"precision mediump float; uniform vec4 uColor;"
"void main(){ gl_FragColor=uColor; }";
