//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface APIGUtils : NSObject
{
}

+ (id)base64Decode:(id)arg1;
+ (id)base64Encode:(id)arg1;
+ (struct CGSize)sizeWithFont:(id)arg1 text:(id)arg2 size:(struct CGSize)arg3;
+ (void)uploadImageToDjango:(id)arg1 progress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)parseKeyboardNotification:(id)arg1 rect:(struct CGRect *)arg2 curve:(unsigned long long *)arg3 duration:(double *)arg4;
+ (_Bool)isValidString:(id)arg1;
+ (id)base64Decode:(id)arg1 urlSafe:(_Bool)arg2;
+ (id)base64Encode:(id)arg1 urlSafe:(_Bool)arg2;

@end
