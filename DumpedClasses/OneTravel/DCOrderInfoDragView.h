//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class CALayer, CAShapeLayer, NSString;

@interface DCOrderInfoDragView : UIView <UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _dragAction;
    CDUnknownBlockType _tapAction;
    CAShapeLayer *_boardLayer;
    CALayer *_triangleLayer;
    struct CGAffineTransform _triangleTransform;
}

@property(nonatomic) struct CGAffineTransform triangleTransform; // @synthesize triangleTransform=_triangleTransform;
@property(retain, nonatomic) CALayer *triangleLayer; // @synthesize triangleLayer=_triangleLayer;
@property(retain, nonatomic) CAShapeLayer *boardLayer; // @synthesize boardLayer=_boardLayer;
@property(copy, nonatomic) CDUnknownBlockType tapAction; // @synthesize tapAction=_tapAction;
@property(copy, nonatomic) CDUnknownBlockType dragAction; // @synthesize dragAction=_dragAction;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setShowDragDown;
- (void)setShowDragUp;
- (void)setup;
- (void)setHighLight:(_Bool)arg1;
- (void)tap:(id)arg1;
- (void)drag:(id)arg1;
- (void)longPress:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

