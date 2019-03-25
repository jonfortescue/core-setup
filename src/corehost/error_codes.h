// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.

#ifndef __ERROR_CODES_H__
#define __ERROR_CODES_H__
enum StatusCode
{
    Success                     = 0,
    InvalidArgFailure           = 0x80008081,
    CoreHostLibLoadFailure      = 0x80008082,
    CoreHostLibMissingFailure   = 0x80008083,
    CoreHostEntryPointFailure   = 0x80008084,
    CoreHostCurHostFindFailure  = 0x80008085,
    CoreHostResolveModeFailure  = 0x80008086,
    CoreClrResolveFailure       = 0x80008087,
    CoreClrBindFailure          = 0x80008088,
    CoreClrInitFailure          = 0x80008089,
    CoreClrExeFailure           = 0x8000808a,
    ResolverInitFailure         = 0x8000808b,
    ResolverResolveFailure      = 0x8000808c,
    LibHostCurExeFindFailure    = 0x8000808d,
    LibHostInitFailure          = 0x8000808e,
    LibHostMuxFailure           = 0x8000808f,
    LibHostExecModeFailure      = 0x80008090,
    LibHostSdkFindFailure       = 0x80008091,
    LibHostInvalidArgs          = 0x80008092,
    InvalidConfigFile           = 0x80008093,
    AppArgNotRunnable           = 0x80008094,
    AppHostExeNotBoundFailure   = 0x80008095,
    FrameworkMissingFailure     = 0x80008096,
    HostApiFailed               = 0x80008097,
    HostApiBufferTooSmall       = 0x80008098,
    LibHostUnknownCommand       = 0x80008099,
    LibHostAppRootFindFailure   = 0x8000809a,
    SdkResolverResolveFailure   = 0x8000809b,
    FrameworkCompatFailure      = 0x8000809c,
    FrameworkCompatRetry        = 0x8000809d,
};
#endif // __ERROR_CODES_H__
