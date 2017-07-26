//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WXAMRCodec : NSObject
{
    CDUnknownBlockType _externalEncodeBlock;
    CDUnknownBlockType _externalDecodeBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType externalDecodeBlock; // @synthesize externalDecodeBlock=_externalDecodeBlock;
@property(copy, nonatomic) CDUnknownBlockType externalEncodeBlock; // @synthesize externalEncodeBlock=_externalEncodeBlock;
- (void).cxx_destruct;
- (_Bool)decodeAmrFile:(id)arg1 toWavFile:(id)arg2;
- (_Bool)encodeWavFile:(id)arg1 toAmrFile:(id)arg2;
- (void)setExternalEncodeBlock:(CDUnknownBlockType)arg1 decodeBlock:(CDUnknownBlockType)arg2;

@end
