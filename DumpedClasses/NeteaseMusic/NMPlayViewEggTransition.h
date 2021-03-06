//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CAAnimationDelegate.h"
#import "NMPlayViewEggBlurAngleCallbacDelegate.h"
#import "UIViewControllerAnimatedTransitioning.h"

@class GPUImageCircleBlurFilter, GPUImagePicture, GPUImageView, NMPlayViewEgg, NMPlayViewEggBlurAngleCallbackLayer, NSArray, NSString, UIImageView;

@interface NMPlayViewEggTransition : NSObject <NMPlayViewEggBlurAngleCallbacDelegate, CAAnimationDelegate, UIViewControllerAnimatedTransitioning>
{
    NMPlayViewEgg *_playViewEgg;
    NSArray *_animationViews;
    GPUImageView *_animationImageView;
    GPUImageCircleBlurFilter *_filter;
    GPUImagePicture *_picture;
    NMPlayViewEggBlurAngleCallbackLayer *_callbackLayer;
    UIImageView *_maskImageView;
    UIImageView *_diskImageView;
    UIImageView *_videoCoverImageView;
    UIImageView *_videoBlurCoverImageView;
}

@property(retain, nonatomic) UIImageView *videoBlurCoverImageView; // @synthesize videoBlurCoverImageView=_videoBlurCoverImageView;
@property(retain, nonatomic) UIImageView *videoCoverImageView; // @synthesize videoCoverImageView=_videoCoverImageView;
- (void).cxx_destruct;
- (void)viewScatter:(id)arg1 delay:(double)arg2;
- (void)scatter;
- (void)animationDidStart:(id)arg1;
- (void)blurAngleUpdatedTo:(double)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithPlayViewEgg:(id)arg1 animationViews:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

