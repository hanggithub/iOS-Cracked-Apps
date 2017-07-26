//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CTUniformStateViewDelegate.h"

@class CALayer, NSString, NSTimer, UILabel;

@interface CTUniformStateView : UIView <CTUniformStateViewDelegate>
{
    int _state;
    CALayer *_refreshView;
    CALayer *_stateView;
    UILabel *_tipsLabelView;
    UIView *_textView;
    double _progress;
    NSTimer *_animationTimer;
}

@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) __weak UIView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *tipsLabelView; // @synthesize tipsLabelView=_tipsLabelView;
@property(retain, nonatomic) CALayer *stateView; // @synthesize stateView=_stateView;
@property(retain, nonatomic) CALayer *refreshView; // @synthesize refreshView=_refreshView;
- (void).cxx_destruct;
- (void)changeState:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
