// Generated by shaderc, bgfx shader compiler tool, version 1.18.118.
static const uint8_t fs_spritealphatest_essl[372] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0b, 0x75, // FSH............u
	0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, // _alphaRef4......
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, // .....s_texColor.
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x01, 0x00, 0x00, 0x76, 0x61, 0x72, // .........6...var
	0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // ying highp vec4 
	0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, // v_color0;.varyin
	0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, // g highp vec2 v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // excoord0;.unifor
	0x6d, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x61, // m highp vec4 u_a
	0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, // lphaRef4;.unifor
	0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, // m sampler2D s_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, // xColor;.void mai
	0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, // n ().{.  lowp ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_1;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // mpvar_1 = textur
	0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, // e2D (s_texColor,
	0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, //  v_texcoord0);. 
	0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, //  if ((tmpvar_1.w
	0x20, 0x3c, 0x3d, 0x20, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x2e, //  <= u_alphaRef4.
	0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x73, 0x63, 0x61, 0x72, // x)) {.    discar
	0x64, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, // d;.  };.  gl_Fra
	0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // gColor = (v_colo
	0x72, 0x30, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, // r0 * tmpvar_1);.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};
static const uint8_t fs_spritealphatest_glsl[349] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0b, 0x75, // FSH............u
	0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, // _alphaRef4......
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, // .....s_texColor.
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x01, 0x00, 0x00, 0x76, 0x61, 0x72, // .............var
	0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // ying vec4 v_colo
	0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, // r0;.varying vec2
	0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, //  v_texcoord0;.un
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x61, 0x6c, 0x70, // iform vec4 u_alp
	0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, // haRef4;.uniform 
	0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // sampler2D s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, // olor;.void main 
	0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, // ().{.  vec4 tmpv
	0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // ar_1;.  tmpvar_1
	0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, //  = texture2D (s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // texColor, v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x28, 0x74, // oord0);.  if ((t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x77, 0x20, 0x3c, 0x3d, 0x20, 0x75, 0x5f, 0x61, // mpvar_1.w <= u_a
	0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x2e, 0x78, 0x29, 0x29, 0x20, 0x7b, 0x0a, 0x20, // lphaRef4.x)) {. 
	0x20, 0x20, 0x20, 0x64, 0x69, 0x73, 0x63, 0x61, 0x72, 0x64, 0x3b, 0x0a, 0x20, 0x20, 0x7d, 0x3b, //    discard;.  };
	0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, // .  gl_FragColor 
	0x3d, 0x20, 0x28, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x2a, 0x20, 0x74, 0x6d, // = (v_color0 * tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                   // pvar_1);.}...
};
static const uint8_t fs_spritealphatest_spv[1269] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x0b, 0x75, // FSH............u
	0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, // _alphaRef4......
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, // .....s_texColor0
	0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x22, 0x00, 0xb4, 0x04, 0x00, 0x00, 0x03, 0x02, 0x23, // .......".......#
	0x07, 0x00, 0x00, 0x01, 0x00, 0x0b, 0x00, 0x08, 0x00, 0xaa, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, // .GLSL.std.450...
	0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, // .........main...
	0x00, 0x61, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, 0x00, 0x10, 0x00, 0x03, // .a...e...r......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, // ................
	0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, // .............mai
	0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x23, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, // n........#...s_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, // exColorSampler..
	0x00, 0x05, 0x00, 0x07, 0x00, 0x26, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // .....&...s_texCo
	0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, // lorTexture......
	0x00, 0x4d, 0x00, 0x00, 0x00, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x42, 0x6c, 0x6f, 0x63, // .M...UniformBloc
	0x6b, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // k........M......
	0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x05, 0x00, 0x03, // .u_alphaRef4....
	0x00, 0x4f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x61, 0x00, 0x00, // .O...........a..
	0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, // .v_color0.......
	0x00, 0x65, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // .e...v_texcoord0
	0x00, 0x05, 0x00, 0x06, 0x00, 0x72, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, // .....r...bgfx_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, // agData0..G...#..
	0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, // .".......G...#..
	0x00, 0x21, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, // .!.......G...&..
	0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x26, 0x00, 0x00, // .".......G...&..
	0x00, 0x21, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x4d, 0x00, 0x00, // .!.......H...M..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x03, // .....#.......G..
	0x00, 0x4d, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4f, 0x00, 0x00, // .M.......G...O..
	0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4f, 0x00, 0x00, // .".......G...O..
	0x00, 0x21, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x61, 0x00, 0x00, // .!.......G...a..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x65, 0x00, 0x00, // .........G...e..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x72, 0x00, 0x00, // .........G...r..
	0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, // .!..............
	0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // ............. ..
	0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // ................
	0x00, 0x02, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, // ................
	0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ..... ..."......
	0x00, 0x06, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x22, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .....;..."...#..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ..... ...%......
	0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x25, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, // .....;...%...&..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x29, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // .........)... ..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x29, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, // .....+...)......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, 0x32, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, // .........2......
	0x00, 0x15, 0x00, 0x04, 0x00, 0x49, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....I... ......
	0x00, 0x1e, 0x00, 0x03, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .....M....... ..
	0x00, 0x4e, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, // .N.......M...;..
	0x00, 0x4e, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, // .N...O.......+..
	0x00, 0x49, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, // .I...P....... ..
	0x00, 0x51, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x14, 0x00, 0x02, // .Q..............
	0x00, 0x54, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // .T... ...]......
	0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, // .....;...]...a..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x64, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, // ..... ...d......
	0x00, 0x0b, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x64, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .....;...d...e..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x71, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ..... ...q......
	0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x71, 0x00, 0x00, 0x00, 0x72, 0x00, 0x00, // .....;...q...r..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, // .....6..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, // ................
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, // .=.......$...#..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, // .=.......'...&..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, // .=.......b...a..
	0x00, 0x3d, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, // .=.......f...e..
	0x00, 0x56, 0x00, 0x05, 0x00, 0x32, 0x00, 0x00, 0x00, 0xa7, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, // .V...2.......'..
	0x00, 0x24, 0x00, 0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, // .$...W..........
	0x00, 0xa7, 0x00, 0x00, 0x00, 0x66, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, // .....f...Q......
	0x00, 0x90, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, // .............A..
	0x00, 0x51, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, 0x4f, 0x00, 0x00, 0x00, 0x2e, 0x00, 0x00, // .Q.......O......
	0x00, 0x50, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00, // .P...=..........
	0x00, 0x91, 0x00, 0x00, 0x00, 0xbc, 0x00, 0x05, 0x00, 0x54, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, // .........T......
	0x00, 0x90, 0x00, 0x00, 0x00, 0x92, 0x00, 0x00, 0x00, 0xf7, 0x00, 0x03, 0x00, 0x95, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0xfa, 0x00, 0x04, 0x00, 0x93, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, // ................
	0x00, 0x95, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x94, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x01, // ................
	0x00, 0xf8, 0x00, 0x02, 0x00, 0x95, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, // ................
	0x00, 0x98, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0xa9, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, // .....b.......>..
	0x00, 0x72, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, // .r...........8..
	0x00, 0x00, 0x00, 0x10, 0x00,                                                                   // .....
};
static const uint8_t fs_spritealphatest_mtl[855] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x11, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // _texColorSampler
	0x11, 0x01, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x73, 0x5f, 0x74, 0x65, 0x78, // ...........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x11, 0x01, 0xff, 0xff, // ColorTexture....
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, // .......u_alphaRe
	0x66, 0x34, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x73, 0x5f, 0x74, // f4...........s_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // exColor.........
	0x00, 0xde, 0x02, 0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, // .....#include <m
	0x65, 0x74, 0x61, 0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, // etal_stdlib>.#in
	0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, // clude <simd/simd
	0x2e, 0x68, 0x3e, 0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, // .h>..using names
	0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, // pace metal;..str
	0x75, 0x63, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // uct _Global.{.  
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, //   float4 u_alpha
	0x52, 0x65, 0x66, 0x34, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, // Ref4;.};..struct
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, //  xlatMtlMain_out
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, // .{.    float4 bg
	0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, // fx_FragData0 [[c
	0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, // olor(0)]];.};..s
	0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // truct xlatMtlMai
	0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // n_in.{.    float
	0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, // 4 v_color0 [[use
	0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // r(locn0)]];.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // float2 v_texcoor
	0x64, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, // d0 [[user(locn1)
	0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, // ]];.};..fragment
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, //  xlatMtlMain_out
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, //  xlatMtlMain(xla
	0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, // tMtlMain_in in [
	0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, // [stage_in]], con
	0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x5f, 0x47, 0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x26, 0x20, 0x5f, // stant _Global& _
	0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, // mtl_u [[buffer(0
	0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, // )]], texture2d<f
	0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // loat> s_texColor
	0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, //  [[texture(0)]],
	0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, //  sampler s_texCo
	0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, // lorSampler [[sam
	0x70, 0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, // pler(0)]]).{.   
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, //  xlatMtlMain_out
	0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, //  out = {};.    f
	0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x5f, 0x31, 0x36, 0x39, 0x20, 0x3d, 0x20, 0x73, 0x5f, 0x74, // loat4 _169 = s_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, // exColor.sample(s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // _texColorSampler
	0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // , in.v_texcoord0
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x69, 0x66, 0x20, 0x28, 0x5f, 0x31, 0x36, 0x39, 0x2e, // );.    if (_169.
	0x77, 0x20, 0x3c, 0x3d, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x61, 0x6c, // w <= _mtl_u.u_al
	0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x2e, 0x78, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x7b, // phaRef4.x).    {
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x64, 0x69, 0x73, 0x63, 0x61, 0x72, 0x64, // .        discard
	0x5f, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x28, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, // _fragment();.   
	0x20, 0x7d, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, //  }.    out.bgfx_
	0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, 0x69, 0x6e, 0x2e, 0x76, // FragData0 = in.v
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x2a, 0x20, 0x5f, 0x31, 0x36, 0x39, 0x3b, 0x0a, // _color0 * _169;.
	0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, //     return out;.
	0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x30, 0x00,                                                       // }....0.
};
static const uint8_t fs_spritealphatest_dx11[514] =
{
	0x46, 0x53, 0x48, 0x0b, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0b, 0x75, // FSH............u
	0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, // _alphaRef4......
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, // .....s_texColor0
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // ..........s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x01, // olor0...........
	0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x5c, 0xce, 0x8a, 0xfe, 0xc3, 0x0e, 0x15, 0x39, 0x81, 0x61, // ..DXBC.......9.a
	0x50, 0xb0, 0x41, 0x89, 0x7b, 0xb3, 0x01, 0x00, 0x00, 0x00, 0xac, 0x01, 0x00, 0x00, 0x03, 0x00, // P.A.{...........
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, // ..,...........IS
	0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, // GNl...........P.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, // ..............b.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, // ......SV_POSITIO
	0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, // N.COLOR.TEXCOORD
	0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, // ..OSGN,.........
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // .. .............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, // ..........SV_TAR
	0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xd0, 0x00, 0x00, 0x00, 0x40, 0x00, // GET...SHDR....@.
	0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, // ..4...Y...F. ...
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, // ......Z....`....
	0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, // ..X....p......UU
	0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, // ..b...........b.
	0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, // ..2.......e.... 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x45, 0x00, // ......h.......E.
	0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x02, 0x00, // ..........F.....
	0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, // ..F~.......`....
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x08, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x80, // ................
	0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, //  .........:.....
	0x00, 0x00, 0x0d, 0x00, 0x04, 0x03, 0x0a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, // ..............8.
	0x00, 0x07, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, // ... ......F.....
	0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, // ..F.......>.....
	0x10, 0x00,                                                                                     // ..
};
