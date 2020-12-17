#pragma once

#include "polyscope/render/opengl/gl_shaders.h"

namespace polyscope {
namespace render {
namespace backend_openGL3_glfw {

// High level pipeline
extern const ShaderStageSpecification MAP_LIGHT_FRAG_SHADER;

// Rules
extern const ShaderReplacementRule DOWNSAMPLE_RESOLVE_1;
extern const ShaderReplacementRule DOWNSAMPLE_RESOLVE_2;
extern const ShaderReplacementRule DOWNSAMPLE_RESOLVE_3;
extern const ShaderReplacementRule DOWNSAMPLE_RESOLVE_4;
extern const ShaderReplacementRule NOAA;
extern const ShaderReplacementRule FXAA;

} // namespace backend_openGL3_glfw
} // namespace render
} // namespace polyscope
