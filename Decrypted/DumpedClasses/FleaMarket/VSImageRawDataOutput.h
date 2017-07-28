//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VSImageInput.h"

@class NSString, VSImageFramebuffer, VSImageGLProgram;

@interface VSImageRawDataOutput : NSObject <VSImageInput>
{
    struct CGSize imageSize;
    unsigned long long inputRotation;
    _Bool outputBGRA;
    VSImageFramebuffer *firstInputFramebuffer;
    VSImageFramebuffer *outputFramebuffer;
    VSImageFramebuffer *retainedFramebuffer;
    _Bool hasReadFromTheCurrentFrame;
    VSImageGLProgram *dataProgram;
    int dataPositionAttribute;
    int dataTextureCoordinateAttribute;
    int dataInputTextureUniform;
    char *_rawBytesForImage;
    _Bool lockNextFramebuffer;
    _Bool enabled;
    CDUnknownBlockType _newFrameAvailableBlock;
}

@property(nonatomic) _Bool enabled; // @synthesize enabled;
@property(copy, nonatomic) CDUnknownBlockType newFrameAvailableBlock; // @synthesize newFrameAvailableBlock=_newFrameAvailableBlock;
- (void).cxx_destruct;
- (void)unlockFramebufferAfterReading;
- (void)lockFramebufferForReading;
- (void)setImageSize:(struct CGSize)arg1;
- (unsigned long long)bytesPerRowInOutput;
@property(readonly) char *rawBytesForImage; // @synthesize rawBytesForImage=_rawBytesForImage;
- (void)setCurrentlyReceivingMonochromeInput:(_Bool)arg1;
- (_Bool)wantsMonochromeInput;
- (_Bool)shouldIgnoreUpdatesToThisTarget;
- (void)endProcessing;
- (struct CGSize)maximumOutputSize;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (struct VSByteColorVector)colorAtLocation:(struct CGPoint)arg1;
- (void)renderAtInternalSize;
- (void)dealloc;
- (id)initWithImageSize:(struct CGSize)arg1 resultsInBGRAFormat:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
