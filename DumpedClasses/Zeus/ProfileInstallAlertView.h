//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KLCPopup, NSString;

@interface ProfileInstallAlertView : UIView
{
    CDUnknownBlockType _cancelButtonClickBlock;
    CDUnknownBlockType _confirmButtonClickBlock;
    NSString *_SSID;
    KLCPopup *_popView;
}

@property(retain, nonatomic) KLCPopup *popView; // @synthesize popView=_popView;
@property(copy, nonatomic) NSString *SSID; // @synthesize SSID=_SSID;
@property(copy, nonatomic) CDUnknownBlockType confirmButtonClickBlock; // @synthesize confirmButtonClickBlock=_confirmButtonClickBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonClickBlock; // @synthesize cancelButtonClickBlock=_cancelButtonClickBlock;
- (void).cxx_destruct;
- (void)drawRoundCorner;
- (void)confirmButtonClick:(id)arg1;
- (void)cancleButtonClick:(id)arg1;
- (id)companyLabel;
- (id)naviTitleLabel;
- (id)createBuleLabel;
- (void)setup;
- (id)initWithSSID:(id)arg1;
- (void)dealloc;
- (void)dismiss;
- (void)show;

@end

