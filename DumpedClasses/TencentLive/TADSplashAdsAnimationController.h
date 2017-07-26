//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CAAnimationDelegate.h"

@class NSString, UIImageView, UIView;

@interface TADSplashAdsAnimationController : UIViewController <CAAnimationDelegate>
{
    double _rate;
    UIView *_maskView;
    UIView *_colorMask;
    UIImageView *_sloganImgView;
    UIImageView *_pinkImgView;
    UIImageView *_pinkBlurredImgView;
    UIImageView *_blueImgView;
    UIImageView *_blueBlurredImgView;
    UIImageView *_greenImgView;
    UIImageView *_greenBlurredImgView;
    UIImageView *_orangeImgView;
    UIImageView *_orangeBlurredImgView;
}

@property(retain, nonatomic) UIImageView *orangeBlurredImgView; // @synthesize orangeBlurredImgView=_orangeBlurredImgView;
@property(retain, nonatomic) UIImageView *orangeImgView; // @synthesize orangeImgView=_orangeImgView;
@property(retain, nonatomic) UIImageView *greenBlurredImgView; // @synthesize greenBlurredImgView=_greenBlurredImgView;
@property(retain, nonatomic) UIImageView *greenImgView; // @synthesize greenImgView=_greenImgView;
@property(retain, nonatomic) UIImageView *blueBlurredImgView; // @synthesize blueBlurredImgView=_blueBlurredImgView;
@property(retain, nonatomic) UIImageView *blueImgView; // @synthesize blueImgView=_blueImgView;
@property(retain, nonatomic) UIImageView *pinkBlurredImgView; // @synthesize pinkBlurredImgView=_pinkBlurredImgView;
@property(retain, nonatomic) UIImageView *pinkImgView; // @synthesize pinkImgView=_pinkImgView;
@property(retain, nonatomic) UIImageView *sloganImgView; // @synthesize sloganImgView=_sloganImgView;
@property(retain, nonatomic) UIView *colorMask; // @synthesize colorMask=_colorMask;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) double rate; // @synthesize rate=_rate;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)orangeBlurredImgViewAnimation;
- (void)orangeImgViewAnimation;
- (void)greenBlurredImgViewAnimation;
- (void)greenImgViewAnimation;
- (void)blueBlurredImgViewAnimation;
- (void)blueImgViewAnimation;
- (void)pinkBlurredImgViewAnimation;
- (void)pinkImgViewAnimation;
- (void)sloganImgViewAnimation;
- (void)colorMaskViewAinimation;
- (void)maskViewAnimation;
- (id)groupAnimation:(id)arg1 withDuration:(double)arg2;
- (id)scaleAnimationWithBeginTime:(double)arg1 animationDuration:(double)arg2 fromValue:(float)arg3 endValue:(float)arg4;
- (id)viewHideAnimationWithBeginTime:(double)arg1 animationDuration:(double)arg2;
- (id)moveAnimationWithBeginTime:(double)arg1 animationDuration:(double)arg2 fromValue:(struct CGPoint)arg3 endValue:(struct CGPoint)arg4;
- (id)viewShowAnimationWithBeginTime:(double)arg1 animationDuration:(double)arg2;
- (void)createOrangeImgView;
- (void)createGreenImgView;
- (void)createBlueImgView;
- (void)createPinkImgView;
- (void)createSloganImgView;
- (void)createColorMaskView;
- (void)createMaskView;
- (void)releaseResource;
- (void)beginSplashAdsAnimation;
- (void)createSplashAdsLayerView;
- (double)getScreenHeight;
- (double)getScreenWidth;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
