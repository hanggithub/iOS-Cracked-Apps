//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPlayerLoadingView.h"

@class UIImageView;

@interface QLStarThemeLoadingView : QLPlayerLoadingView
{
    UIImageView *_bgImgView;
    UIImageView *_animateView;
}

@property(retain, nonatomic) UIImageView *animateView; // @synthesize animateView=_animateView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
- (void).cxx_destruct;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)stopRotateLayer:(id)arg1;
- (void)rotateLayer:(id)arg1 duration:(double)arg2 direction:(int)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
