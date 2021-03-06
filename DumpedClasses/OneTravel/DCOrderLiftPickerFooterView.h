//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, DCRichLabel, NSString, UIColor;

@interface DCOrderLiftPickerFooterView : UIView
{
    CALayer *_lineLayer;
    UIColor *_detailColor;
    double _detailFontSize;
    CDUnknownBlockType _tapActionBlock;
    DCRichLabel *_leftLabel;
    DCRichLabel *_rightLabel;
}

+ (double)viewHeight;
@property(retain, nonatomic) DCRichLabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) DCRichLabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(copy, nonatomic) CDUnknownBlockType tapActionBlock; // @synthesize tapActionBlock=_tapActionBlock;
@property(nonatomic) double detailFontSize; // @synthesize detailFontSize=_detailFontSize;
@property(copy, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
- (void).cxx_destruct;
- (void)hidenLine;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
@property(copy, nonatomic) NSString *detail; // @dynamic detail;
- (id)lineLayer;
@property(copy, nonatomic) NSString *title; // @dynamic title;
- (void)layoutSubviews;
- (id)init;

@end

