//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface VSImageFramebuffer : NSObject
{
    unsigned int framebuffer;
    struct __CVBuffer *pixelBufferRef;
    struct __CVBuffer *renderTexture;
    unsigned long long readLockCount;
    unsigned long long framebufferReferenceCount;
    _Bool referenceCountingDisabled;
    _Bool _yuvFormat;
    _Bool _onlyTexture;
    unsigned int _texture;
    NSDictionary *_plusInfo;
    struct CGSize _size;
    struct VSTextureOptions _textureOptions;
}

@property(retain, nonatomic) NSDictionary *plusInfo; // @synthesize plusInfo=_plusInfo;
@property(readonly) _Bool onlyTexture; // @synthesize onlyTexture=_onlyTexture;
@property(readonly) struct VSTextureOptions textureOptions; // @synthesize textureOptions=_textureOptions;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly) unsigned int texture; // @synthesize texture=_texture;
- (struct __CVBuffer *)pixelBuffer;
- (char *)byteBuffer;
- (unsigned long long)bytesPerRow;
- (void)unlockAfterReading;
- (void)lockForReading;
- (void)restoreRenderTarget;
- (struct CGImage *)newCGImageFromFramebufferContents;
- (void)enableReferenceCounting;
- (void)disableReferenceCounting;
- (void)clearAllLocks;
- (void)unlock;
- (void)lock;
- (void)activateFramebuffer;
- (void)destroyFramebuffer;
- (void)generateFramebuffer;
- (void)generateTexture;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 overriddenTexture:(unsigned int)arg2;
- (id)initWithSize:(struct CGSize)arg1 textureOptions:(struct VSTextureOptions)arg2 onlyTexture:(_Bool)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 textureOptions:(struct VSTextureOptions)arg2 onlyTexture:(_Bool)arg3;

@end
