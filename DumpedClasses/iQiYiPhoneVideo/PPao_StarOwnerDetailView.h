//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton, UIImageView, UILabel;

@interface PPao_StarOwnerDetailView : UIControl
{
    UILabel *_contentLabel;
    UILabel *_fansLabel;
    UIImageView *_fansArrow;
    UIButton *_fansButton;
}

- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)fansClick;
- (void)layoutSubviews;
- (void)viewEnableState:(_Bool)arg1 fans:(long long)arg2;
- (void)setFansText:(long long)arg1;
- (void)setContentText:(_Bool)arg1 count:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

