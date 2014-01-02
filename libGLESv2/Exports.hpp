#ifndef EXPORTS_HPP_INCLUDED
#define EXPORTS_HPP_INCLUDED

#include <stdexcept>
#include <EGL/egl.h>
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include "Library.hpp"

extern Library* OriginalGLESV2;
extern "C" bool __stdcall Initialize(void);
extern "C" bool __stdcall DeInitialize(void);

namespace egl
{
    class Display;
    class Surface;
};

namespace gl
{
    class Context;

    struct Current
    {
        Context *context;
        egl::Display *display;
    };
};

typedef void (__stdcall *ptr_glActiveTexture)(GLenum texture);
typedef void (__stdcall *ptr_glAttachShader)(GLuint program, GLuint shader);
typedef void (__stdcall *ptr_glBeginQueryEXT)(GLenum target, GLuint id);
typedef void (__stdcall *ptr_glBindAttribLocation)(GLuint program, GLuint index, const GLchar* name);
typedef void (__stdcall *ptr_glBindBuffer)(GLenum target, GLuint buffer);
typedef void (__stdcall *ptr_glBindFramebuffer)(GLenum target, GLuint framebuffer);
typedef void (__stdcall *ptr_glBindRenderbuffer)(GLenum target, GLuint renderbuffer);
typedef void (__stdcall *ptr_glBindTexture)(GLenum target, GLuint texture);
typedef void (__stdcall *ptr_glBlendColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef void (__stdcall *ptr_glBlendEquation)(GLenum mode);
typedef void (__stdcall *ptr_glBlendEquationSeparate)(GLenum modeRGB, GLenum modeAlpha);
typedef void (__stdcall *ptr_glBlendFunc)(GLenum sfactor, GLenum dfactor);
typedef void (__stdcall *ptr_glBlendFuncSeparate)(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (__stdcall *ptr_glBufferData)(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
typedef void (__stdcall *ptr_glBufferSubData)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
typedef GLenum (__stdcall *ptr_glCheckFramebufferStatus)(GLenum target);
typedef void (__stdcall *ptr_glClear)(GLbitfield mask);
typedef void (__stdcall *ptr_glClearColor)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef void (__stdcall *ptr_glClearDepthf)(GLclampf depth);
typedef void (__stdcall *ptr_glClearStencil)(GLint s);
typedef void (__stdcall *ptr_glColorMask)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (__stdcall *ptr_glCompileShader)(GLuint shader);
typedef void (__stdcall *ptr_glCompressedTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (__stdcall *ptr_glCompressedTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (__stdcall *ptr_glCopyTexImage2D)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (__stdcall *ptr_glCopyTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef GLuint (__stdcall *ptr_glCreateProgram)(void);
typedef GLuint (__stdcall *ptr_glCreateShader)(GLenum type);
typedef void (__stdcall *ptr_glCullFace)(GLenum mode);
typedef void (__stdcall *ptr_glDeleteBuffers)(GLsizei n, const GLuint* buffers);
typedef void (__stdcall *ptr_glDeleteFencesNV)(GLsizei n, const GLuint* fences);
typedef void (__stdcall *ptr_glDeleteFramebuffers)(GLsizei n, const GLuint* framebuffers);
typedef void (__stdcall *ptr_glDeleteProgram)(GLuint program);
typedef void (__stdcall *ptr_glDeleteQueriesEXT)(GLsizei n, const GLuint *ids);
typedef void (__stdcall *ptr_glDeleteRenderbuffers)(GLsizei n, const GLuint* renderbuffers);
typedef void (__stdcall *ptr_glDeleteShader)(GLuint shader);
typedef void (__stdcall *ptr_glDeleteTextures)(GLsizei n, const GLuint* textures);
typedef void (__stdcall *ptr_glDepthFunc)(GLenum func);
typedef void (__stdcall *ptr_glDepthMask)(GLboolean flag);
typedef void (__stdcall *ptr_glDepthRangef)(GLclampf zNear, GLclampf zFar);
typedef void (__stdcall *ptr_glDetachShader)(GLuint program, GLuint shader);
typedef void (__stdcall *ptr_glDisable)(GLenum cap);
typedef void (__stdcall *ptr_glDisableVertexAttribArray)(GLuint index);
typedef void (__stdcall *ptr_glDrawArrays)(GLenum mode, GLint first, GLsizei count);
typedef void (__stdcall *ptr_glDrawArraysInstancedANGLE)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (__stdcall *ptr_glDrawElements)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
typedef void (__stdcall *ptr_glDrawElementsInstancedANGLE)(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);
typedef void (__stdcall *ptr_glEnable)(GLenum cap);
typedef void (__stdcall *ptr_glEnableVertexAttribArray)(GLuint index);
typedef void (__stdcall *ptr_glEndQueryEXT)(GLenum target);
typedef void (__stdcall *ptr_glFinishFenceNV)(GLuint fence);
typedef void (__stdcall *ptr_glFinish)(void);
typedef void (__stdcall *ptr_glFlush)(void);
typedef void (__stdcall *ptr_glFramebufferRenderbuffer)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (__stdcall *ptr_glFramebufferTexture2D)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (__stdcall *ptr_glFrontFace)(GLenum mode);
typedef void (__stdcall *ptr_glGenBuffers)(GLsizei n, GLuint* buffers);
typedef void (__stdcall *ptr_glGenerateMipmap)(GLenum target);
typedef void (__stdcall *ptr_glGenFencesNV)(GLsizei n, GLuint* fences);
typedef void (__stdcall *ptr_glGenFramebuffers)(GLsizei n, GLuint* framebuffers);
typedef void (__stdcall *ptr_glGenQueriesEXT)(GLsizei n, GLuint* ids);
typedef void (__stdcall *ptr_glGenRenderbuffers)(GLsizei n, GLuint* renderbuffers);
typedef void (__stdcall *ptr_glGenTextures)(GLsizei n, GLuint* textures);
typedef void (__stdcall *ptr_glGetActiveAttrib)(GLuint program, GLuint index, GLsizei bufsize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
typedef void (__stdcall *ptr_glGetActiveUniform)(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
typedef void (__stdcall *ptr_glGetAttachedShaders)(GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders);
typedef int (__stdcall *ptr_glGetAttribLocation)(GLuint program, const GLchar* name);
typedef void (__stdcall *ptr_glGetBooleanv)(GLenum pname, GLboolean* params);
typedef void (__stdcall *ptr_glGetBufferParameteriv)(GLenum target, GLenum pname, GLint* params);
typedef GLenum (__stdcall *ptr_glGetError)(void);
typedef void (__stdcall *ptr_glGetFenceivNV)(GLuint fence, GLenum pname, GLint *params);
typedef void (__stdcall *ptr_glGetFloatv)(GLenum pname, GLfloat* params);
typedef void (__stdcall *ptr_glGetFramebufferAttachmentParameteriv)(GLenum target, GLenum attachment, GLenum pname, GLint* params);
typedef GLenum (__stdcall *ptr_glGetGraphicsResetStatusEXT)(void);
typedef void (__stdcall *ptr_glGetIntegerv)(GLenum pname, GLint* params);
typedef void (__stdcall *ptr_glGetProgramiv)(GLuint program, GLenum pname, GLint* params);
typedef void (__stdcall *ptr_glGetProgramInfoLog)(GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog);
typedef void (__stdcall *ptr_glGetQueryivEXT)(GLenum target, GLenum pname, GLint *params);
typedef void (__stdcall *ptr_glGetQueryObjectuivEXT)(GLuint id, GLenum pname, GLuint *params);
typedef void (__stdcall *ptr_glGetRenderbufferParameteriv)(GLenum target, GLenum pname, GLint* params);
typedef void (__stdcall *ptr_glGetShaderiv)(GLuint shader, GLenum pname, GLint* params);
typedef void (__stdcall *ptr_glGetShaderInfoLog)(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog);
typedef void (__stdcall *ptr_glGetShaderPrecisionFormat)(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
typedef void (__stdcall *ptr_glGetShaderSource)(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
typedef void (__stdcall *ptr_glGetTranslatedShaderSourceANGLE)(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
typedef const GLubyte* (__stdcall *ptr_glGetString)(GLenum name);
typedef void (__stdcall *ptr_glGetTexParameterfv)(GLenum target, GLenum pname, GLfloat* params);
typedef void (__stdcall *ptr_glGetTexParameteriv)(GLenum target, GLenum pname, GLint* params);
typedef void (__stdcall *ptr_glGetnUniformfvEXT)(GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
typedef void (__stdcall *ptr_glGetUniformfv)(GLuint program, GLint location, GLfloat* params);
typedef void (__stdcall *ptr_glGetnUniformivEXT)(GLuint program, GLint location, GLsizei bufSize, GLint* params);
typedef void (__stdcall *ptr_glGetUniformiv)(GLuint program, GLint location, GLint* params);
typedef int (__stdcall *ptr_glGetUniformLocation)(GLuint program, const GLchar* name);
typedef void (__stdcall *ptr_glGetVertexAttribfv)(GLuint index, GLenum pname, GLfloat* params);
typedef void (__stdcall *ptr_glGetVertexAttribiv)(GLuint index, GLenum pname, GLint* params);
typedef void (__stdcall *ptr_glGetVertexAttribPointerv)(GLuint index, GLenum pname, GLvoid** pointer);
typedef void (__stdcall *ptr_glHint)(GLenum target, GLenum mode);
typedef GLboolean (__stdcall *ptr_glIsBuffer)(GLuint buffer);
typedef GLboolean (__stdcall *ptr_glIsEnabled)(GLenum cap);
typedef GLboolean (__stdcall *ptr_glIsFenceNV)(GLuint fence);
typedef GLboolean (__stdcall *ptr_glIsFramebuffer)(GLuint framebuffer);
typedef GLboolean (__stdcall *ptr_glIsProgram)(GLuint program);
typedef GLboolean (__stdcall *ptr_glIsQueryEXT)(GLuint id);
typedef GLboolean (__stdcall *ptr_glIsRenderbuffer)(GLuint renderbuffer);
typedef GLboolean (__stdcall *ptr_glIsShader)(GLuint shader);
typedef GLboolean (__stdcall *ptr_glIsTexture)(GLuint texture);
typedef void (__stdcall *ptr_glLineWidth)(GLfloat width);
typedef void (__stdcall *ptr_glLinkProgram)(GLuint program);
typedef void (__stdcall *ptr_glPixelStorei)(GLenum pname, GLint param);
typedef void (__stdcall *ptr_glPolygonOffset)(GLfloat factor, GLfloat units);
typedef void (__stdcall *ptr_glReadnPixelsEXT)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data);
typedef void (__stdcall *ptr_glReadPixels)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
typedef void (__stdcall *ptr_glReleaseShaderCompiler)(void);
typedef void (__stdcall *ptr_glRenderbufferStorageMultisampleANGLE)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (__stdcall *ptr_glRenderbufferStorage)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (__stdcall *ptr_glSampleCoverage)(GLclampf value, GLboolean invert);
typedef void (__stdcall *ptr_glSetFenceNV)(GLuint fence, GLenum condition);
typedef void (__stdcall *ptr_glScissor)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (__stdcall *ptr_glShaderBinary)(GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length);
typedef void (__stdcall *ptr_glShaderSource)(GLuint shader, GLsizei count, const GLchar** string, const GLint* length);
typedef void (__stdcall *ptr_glStencilFunc)(GLenum func, GLint ref, GLuint mask);
typedef void (__stdcall *ptr_glStencilFuncSeparate)(GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (__stdcall *ptr_glStencilMask)(GLuint mask);
typedef void (__stdcall *ptr_glStencilMaskSeparate)(GLenum face, GLuint mask);
typedef void (__stdcall *ptr_glStencilOp)(GLenum fail, GLenum zfail, GLenum zpass);
typedef void (__stdcall *ptr_glStencilOpSeparate)(GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
typedef GLboolean (__stdcall *ptr_glTestFenceNV)(GLuint fence);
typedef void (__stdcall *ptr_glTexImage2D)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (__stdcall *ptr_glTexParameterf)(GLenum target, GLenum pname, GLfloat param);
typedef void (__stdcall *ptr_glTexParameterfv)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (__stdcall *ptr_glTexParameteri)(GLenum target, GLenum pname, GLint param);
typedef void (__stdcall *ptr_glTexParameteriv)(GLenum target, GLenum pname, const GLint* params);
typedef void (__stdcall *ptr_glTexStorage2DEXT)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (__stdcall *ptr_glTexSubImage2D)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (__stdcall *ptr_glUniform1f)(GLint location, GLfloat x);
typedef void (__stdcall *ptr_glUniform1fv)(GLint location, GLsizei count, const GLfloat* v);
typedef void (__stdcall *ptr_glUniform1i)(GLint location, GLint x);
typedef void (__stdcall *ptr_glUniform1iv)(GLint location, GLsizei count, const GLint* v);
typedef void (__stdcall *ptr_glUniform2f)(GLint location, GLfloat x, GLfloat y);
typedef void (__stdcall *ptr_glUniform2fv)(GLint location, GLsizei count, const GLfloat* v);
typedef void (__stdcall *ptr_glUniform2i)(GLint location, GLint x, GLint y);
typedef void (__stdcall *ptr_glUniform2iv)(GLint location, GLsizei count, const GLint* v);
typedef void (__stdcall *ptr_glUniform3f)(GLint location, GLfloat x, GLfloat y, GLfloat z);
typedef void (__stdcall *ptr_glUniform3fv)(GLint location, GLsizei count, const GLfloat* v);
typedef void (__stdcall *ptr_glUniform3i)(GLint location, GLint x, GLint y, GLint z);
typedef void (__stdcall *ptr_glUniform3iv)(GLint location, GLsizei count, const GLint* v);
typedef void (__stdcall *ptr_glUniform4f)(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (__stdcall *ptr_glUniform4fv)(GLint location, GLsizei count, const GLfloat* v);
typedef void (__stdcall *ptr_glUniform4i)(GLint location, GLint x, GLint y, GLint z, GLint w);
typedef void (__stdcall *ptr_glUniform4iv)(GLint location, GLsizei count, const GLint* v);
typedef void (__stdcall *ptr_glUniformMatrix2fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (__stdcall *ptr_glUniformMatrix3fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (__stdcall *ptr_glUniformMatrix4fv)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (__stdcall *ptr_glUseProgram)(GLuint program);
typedef void (__stdcall *ptr_glValidateProgram)(GLuint program);
typedef void (__stdcall *ptr_glVertexAttrib1f)(GLuint index, GLfloat x);
typedef void (__stdcall *ptr_glVertexAttrib1fv)(GLuint index, const GLfloat* values);
typedef void (__stdcall *ptr_glVertexAttrib2f)(GLuint index, GLfloat x, GLfloat y);
typedef void (__stdcall *ptr_glVertexAttrib2fv)(GLuint index, const GLfloat* values);
typedef void (__stdcall *ptr_glVertexAttrib3f)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (__stdcall *ptr_glVertexAttrib3fv)(GLuint index, const GLfloat* values);
typedef void (__stdcall *ptr_glVertexAttrib4f)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (__stdcall *ptr_glVertexAttrib4fv)(GLuint index, const GLfloat* values);
typedef void (__stdcall *ptr_glVertexAttribDivisorANGLE)(GLuint index, GLuint divisor);
typedef void (__stdcall *ptr_glVertexAttribPointer)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr);
typedef void (__stdcall *ptr_glViewport)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (__stdcall *ptr_glBlitFramebufferANGLE)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (__stdcall *ptr_glTexImage3DOES)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (__stdcall *ptr_glGetProgramBinaryOES)(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (__stdcall *ptr_glProgramBinaryOES)(GLuint program, GLenum binaryFormat, const void *binary, GLint length);
typedef void (__stdcall *ptr_glDrawBuffersEXT)(GLsizei n, const GLenum *bufs);
typedef __eglMustCastToProperFunctionPointerType (__stdcall *ptr_glGetProcAddress)(const char *procname);
typedef bool (__stdcall *ptr_glBindTexImage)(egl::Surface *surface);
typedef const unsigned char* (*GetCategoryEnabledFlagFunc)(const char* name);
typedef void (*AddTraceEventFunc)(char phase, const unsigned char* categoryGroupEnabled, const char* name, unsigned long long id, int numArgs, const char** argNames, const unsigned char* argTypes, const unsigned long long* argValues, unsigned char flags);
typedef void (__stdcall *SetTraceFunctionPointers)(GetCategoryEnabledFlagFunc get_category_enabled_flag, AddTraceEventFunc add_trace_event_func);

extern "C" void __stdcall Hook_glActiveTexture(GLenum texture);
extern "C" void __stdcall Hook_glAttachShader(GLuint program, GLuint shader);
extern "C" void __stdcall Hook_glBeginQueryEXT(GLenum target, GLuint id);
extern "C" void __stdcall Hook_glBindAttribLocation(GLuint program, GLuint index, const GLchar* name);
extern "C" void __stdcall Hook_glBindBuffer(GLenum target, GLuint buffer);
extern "C" void __stdcall Hook_glBindFramebuffer(GLenum target, GLuint framebuffer);
extern "C" void __stdcall Hook_glBindRenderbuffer(GLenum target, GLuint renderbuffer);
extern "C" void __stdcall Hook_glBindTexture(GLenum target, GLuint texture);
extern "C" void __stdcall Hook_glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern "C" void __stdcall Hook_glBlendEquation(GLenum mode);
extern "C" void __stdcall Hook_glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha);
extern "C" void __stdcall Hook_glBlendFunc(GLenum sfactor, GLenum dfactor);
extern "C" void __stdcall Hook_glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
extern "C" void __stdcall Hook_glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
extern "C" void __stdcall Hook_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
extern "C" GLenum __stdcall Hook_glCheckFramebufferStatus(GLenum target);
extern "C" void __stdcall Hook_glClear(GLbitfield mask);
extern "C" void __stdcall Hook_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
extern "C" void __stdcall Hook_glClearDepthf(GLclampf depth);
extern "C" void __stdcall Hook_glClearStencil(GLint s);
extern "C" void __stdcall Hook_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
extern "C" void __stdcall Hook_glCompileShader(GLuint shader);
extern "C" void __stdcall Hook_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
extern "C" void __stdcall Hook_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
extern "C" void __stdcall Hook_glCopyTexImage2D(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
extern "C" void __stdcall Hook_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
extern "C" GLuint __stdcall Hook_glCreateProgram(void);
extern "C" GLuint __stdcall Hook_glCreateShader(GLenum type);
extern "C" void __stdcall Hook_glCullFace(GLenum mode);
extern "C" void __stdcall Hook_glDeleteBuffers(GLsizei n, const GLuint* buffers);
extern "C" void __stdcall Hook_glDeleteFencesNV(GLsizei n, const GLuint* fences);
extern "C" void __stdcall Hook_glDeleteFramebuffers(GLsizei n, const GLuint* framebuffers);
extern "C" void __stdcall Hook_glDeleteProgram(GLuint program);
extern "C" void __stdcall Hook_glDeleteQueriesEXT(GLsizei n, const GLuint *ids);
extern "C" void __stdcall Hook_glDeleteRenderbuffers(GLsizei n, const GLuint* renderbuffers);
extern "C" void __stdcall Hook_glDeleteShader(GLuint shader);
extern "C" void __stdcall Hook_glDeleteTextures(GLsizei n, const GLuint* textures);
extern "C" void __stdcall Hook_glDepthFunc(GLenum func);
extern "C" void __stdcall Hook_glDepthMask(GLboolean flag);
extern "C" void __stdcall Hook_glDepthRangef(GLclampf zNear, GLclampf zFar);
extern "C" void __stdcall Hook_glDetachShader(GLuint program, GLuint shader);
extern "C" void __stdcall Hook_glDisable(GLenum cap);
extern "C" void __stdcall Hook_glDisableVertexAttribArray(GLuint index);
extern "C" void __stdcall Hook_glDrawArrays(GLenum mode, GLint first, GLsizei count);
extern "C" void __stdcall Hook_glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
extern "C" void __stdcall Hook_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
extern "C" void __stdcall Hook_glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const GLvoid *indices, GLsizei primcount);
extern "C" void __stdcall Hook_glEnable(GLenum cap);
extern "C" void __stdcall Hook_glEnableVertexAttribArray(GLuint index);
extern "C" void __stdcall Hook_glEndQueryEXT(GLenum target);
extern "C" void __stdcall Hook_glFinishFenceNV(GLuint fence);
extern "C" void __stdcall Hook_glFinish(void);
extern "C" void __stdcall Hook_glFlush(void);
extern "C" void __stdcall Hook_glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
extern "C" void __stdcall Hook_glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
extern "C" void __stdcall Hook_glFrontFace(GLenum mode);
extern "C" void __stdcall Hook_glGenBuffers(GLsizei n, GLuint* buffers);
extern "C" void __stdcall Hook_glGenerateMipmap(GLenum target);
extern "C" void __stdcall Hook_glGenFencesNV(GLsizei n, GLuint* fences);
extern "C" void __stdcall Hook_glGenFramebuffers(GLsizei n, GLuint* framebuffers);
extern "C" void __stdcall Hook_glGenQueriesEXT(GLsizei n, GLuint* ids);
extern "C" void __stdcall Hook_glGenRenderbuffers(GLsizei n, GLuint* renderbuffers);
extern "C" void __stdcall Hook_glGenTextures(GLsizei n, GLuint* textures);
extern "C" void __stdcall Hook_glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufsize, GLsizei *length, GLint *size, GLenum *type, GLchar *name);
extern "C" void __stdcall Hook_glGetActiveUniform(GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
extern "C" void __stdcall Hook_glGetAttachedShaders(GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders);
extern "C" int __stdcall Hook_glGetAttribLocation(GLuint program, const GLchar* name);
extern "C" void __stdcall Hook_glGetBooleanv(GLenum pname, GLboolean* params);
extern "C" void __stdcall Hook_glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params);
extern "C" GLenum __stdcall Hook_glGetError(void);
extern "C" void __stdcall Hook_glGetFenceivNV(GLuint fence, GLenum pname, GLint *params);
extern "C" void __stdcall Hook_glGetFloatv(GLenum pname, GLfloat* params);
extern "C" void __stdcall Hook_glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint* params);
extern "C" GLenum __stdcall Hook_glGetGraphicsResetStatusEXT(void);
extern "C" void __stdcall Hook_glGetIntegerv(GLenum pname, GLint* params);
extern "C" void __stdcall Hook_glGetProgramiv(GLuint program, GLenum pname, GLint* params);
extern "C" void __stdcall Hook_glGetProgramInfoLog(GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog);
extern "C" void __stdcall Hook_glGetQueryivEXT(GLenum target, GLenum pname, GLint *params);
extern "C" void __stdcall Hook_glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint *params);
extern "C" void __stdcall Hook_glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint* params);
extern "C" void __stdcall Hook_glGetShaderiv(GLuint shader, GLenum pname, GLint* params);
extern "C" void __stdcall Hook_glGetShaderInfoLog(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog);
extern "C" void __stdcall Hook_glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
extern "C" void __stdcall Hook_glGetShaderSource(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
extern "C" void __stdcall Hook_glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);
extern "C" const GLubyte* __stdcall Hook_glGetString(GLenum name);
extern "C" void __stdcall Hook_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params);
extern "C" void __stdcall Hook_glGetTexParameteriv(GLenum target, GLenum pname, GLint* params);
extern "C" void __stdcall Hook_glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
extern "C" void __stdcall Hook_glGetUniformfv(GLuint program, GLint location, GLfloat* params);
extern "C" void __stdcall Hook_glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint* params);
extern "C" void __stdcall Hook_glGetUniformiv(GLuint program, GLint location, GLint* params);
extern "C" int __stdcall Hook_glGetUniformLocation(GLuint program, const GLchar* name);
extern "C" void __stdcall Hook_glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params);
extern "C" void __stdcall Hook_glGetVertexAttribiv(GLuint index, GLenum pname, GLint* params);
extern "C" void __stdcall Hook_glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid** pointer);
extern "C" void __stdcall Hook_glHint(GLenum target, GLenum mode);
extern "C" GLboolean __stdcall Hook_glIsBuffer(GLuint buffer);
extern "C" GLboolean __stdcall Hook_glIsEnabled(GLenum cap);
extern "C" GLboolean __stdcall Hook_glIsFenceNV(GLuint fence);
extern "C" GLboolean __stdcall Hook_glIsFramebuffer(GLuint framebuffer);
extern "C" GLboolean __stdcall Hook_glIsProgram(GLuint program);
extern "C" GLboolean __stdcall Hook_glIsQueryEXT(GLuint id);
extern "C" GLboolean __stdcall Hook_glIsRenderbuffer(GLuint renderbuffer);
extern "C" GLboolean __stdcall Hook_glIsShader(GLuint shader);
extern "C" GLboolean __stdcall Hook_glIsTexture(GLuint texture);
extern "C" void __stdcall Hook_glLineWidth(GLfloat width);
extern "C" void __stdcall Hook_glLinkProgram(GLuint program);
extern "C" void __stdcall Hook_glPixelStorei(GLenum pname, GLint param);
extern "C" void __stdcall Hook_glPolygonOffset(GLfloat factor, GLfloat units);
extern "C" void __stdcall Hook_glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid *data);
extern "C" void __stdcall Hook_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
extern "C" void __stdcall Hook_glReleaseShaderCompiler(void);
extern "C" void __stdcall Hook_glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
extern "C" void __stdcall Hook_glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
extern "C" void __stdcall Hook_glSampleCoverage(GLclampf value, GLboolean invert);
extern "C" void __stdcall Hook_glSetFenceNV(GLuint fence, GLenum condition);
extern "C" void __stdcall Hook_glScissor(GLint x, GLint y, GLsizei width, GLsizei height);
extern "C" void __stdcall Hook_glShaderBinary(GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length);
extern "C" void __stdcall Hook_glShaderSource(GLuint shader, GLsizei count, const GLchar** string, const GLint* length);
extern "C" void __stdcall Hook_glStencilFunc(GLenum func, GLint ref, GLuint mask);
extern "C" void __stdcall Hook_glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask);
extern "C" void __stdcall Hook_glStencilMask(GLuint mask);
extern "C" void __stdcall Hook_glStencilMaskSeparate(GLenum face, GLuint mask);
extern "C" void __stdcall Hook_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass);
extern "C" void __stdcall Hook_glStencilOpSeparate(GLenum face, GLenum fail, GLenum zfail, GLenum zpass);
extern "C" GLboolean __stdcall Hook_glTestFenceNV(GLuint fence);
extern "C" void __stdcall Hook_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
extern "C" void __stdcall Hook_glTexParameterf(GLenum target, GLenum pname, GLfloat param);
extern "C" void __stdcall Hook_glTexParameterfv(GLenum target, GLenum pname, const GLfloat* params);
extern "C" void __stdcall Hook_glTexParameteri(GLenum target, GLenum pname, GLint param);
extern "C" void __stdcall Hook_glTexParameteriv(GLenum target, GLenum pname, const GLint* params);
extern "C" void __stdcall Hook_glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
extern "C" void __stdcall Hook_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
extern "C" void __stdcall Hook_glUniform1f(GLint location, GLfloat x);
extern "C" void __stdcall Hook_glUniform1fv(GLint location, GLsizei count, const GLfloat* v);
extern "C" void __stdcall Hook_glUniform1i(GLint location, GLint x);
extern "C" void __stdcall Hook_glUniform1iv(GLint location, GLsizei count, const GLint* v);
extern "C" void __stdcall Hook_glUniform2f(GLint location, GLfloat x, GLfloat y);
extern "C" void __stdcall Hook_glUniform2fv(GLint location, GLsizei count, const GLfloat* v);
extern "C" void __stdcall Hook_glUniform2i(GLint location, GLint x, GLint y);
extern "C" void __stdcall Hook_glUniform2iv(GLint location, GLsizei count, const GLint* v);
extern "C" void __stdcall Hook_glUniform3f(GLint location, GLfloat x, GLfloat y, GLfloat z);
extern "C" void __stdcall Hook_glUniform3fv(GLint location, GLsizei count, const GLfloat* v);
extern "C" void __stdcall Hook_glUniform3i(GLint location, GLint x, GLint y, GLint z);
extern "C" void __stdcall Hook_glUniform3iv(GLint location, GLsizei count, const GLint* v);
extern "C" void __stdcall Hook_glUniform4f(GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern "C" void __stdcall Hook_glUniform4fv(GLint location, GLsizei count, const GLfloat* v);
extern "C" void __stdcall Hook_glUniform4i(GLint location, GLint x, GLint y, GLint z, GLint w);
extern "C" void __stdcall Hook_glUniform4iv(GLint location, GLsizei count, const GLint* v);
extern "C" void __stdcall Hook_glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
extern "C" void __stdcall Hook_glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
extern "C" void __stdcall Hook_glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
extern "C" void __stdcall Hook_glUseProgram(GLuint program);
extern "C" void __stdcall Hook_glValidateProgram(GLuint program);
extern "C" void __stdcall Hook_glVertexAttrib1f(GLuint index, GLfloat x);
extern "C" void __stdcall Hook_glVertexAttrib1fv(GLuint index, const GLfloat* values);
extern "C" void __stdcall Hook_glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y);
extern "C" void __stdcall Hook_glVertexAttrib2fv(GLuint index, const GLfloat* values);
extern "C" void __stdcall Hook_glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z);
extern "C" void __stdcall Hook_glVertexAttrib3fv(GLuint index, const GLfloat* values);
extern "C" void __stdcall Hook_glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
extern "C" void __stdcall Hook_glVertexAttrib4fv(GLuint index, const GLfloat* values);
extern "C" void __stdcall Hook_glVertexAttribDivisorANGLE(GLuint index, GLuint divisor);
extern "C" void __stdcall Hook_glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr);
extern "C" void __stdcall Hook_glViewport(GLint x, GLint y, GLsizei width, GLsizei height);
extern "C" void __stdcall Hook_glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
extern "C" void __stdcall Hook_glTexImage3DOES(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
extern "C" void __stdcall Hook_glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
extern "C" void __stdcall Hook_glProgramBinaryOES(GLuint program, GLenum binaryFormat, const void *binary, GLint length);
extern "C" void __stdcall Hook_glDrawBuffersEXT(GLsizei n, const GLenum *bufs);
extern "C" __eglMustCastToProperFunctionPointerType __stdcall Hook_glGetProcAddress(const char *procname);
extern "C" bool __stdcall Hook_glBindTexImage(egl::Surface *surface);
extern "C" void __stdcall Hook_SetTraceFunctionPointers(GetCategoryEnabledFlagFunc get_category_enabled_flag, AddTraceEventFunc add_trace_event_func);

#endif // EXPORTS_HPP_INCLUDED