//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, UIView;

@interface WXToastManager : NSObject
{
    NSMutableArray *_toastQueue;
    UIView *_toastingView;
}

+ (id)sharedManager;
@property(retain, nonatomic) UIView *toastingView; // @synthesize toastingView=_toastingView;
@property(retain, nonatomic) NSMutableArray *toastQueue; // @synthesize toastQueue=_toastQueue;
- (void).cxx_destruct;

@end
