//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FMChatSendTypeItemView;

@interface FMMessageShareMenuView : UIView
{
    CDUnknownBlockType _cameraBlock;
    CDUnknownBlockType _photoBlock;
    CDUnknownBlockType _transferBlock;
    CDUnknownBlockType _meetupBlock;
    CDUnknownBlockType _liveBlock;
    CDUnknownBlockType _voiceChatBlock;
    FMChatSendTypeItemView *_photoItemView;
    FMChatSendTypeItemView *_transferItemView;
    FMChatSendTypeItemView *_meetupItemView;
}

@property(retain, nonatomic) FMChatSendTypeItemView *meetupItemView; // @synthesize meetupItemView=_meetupItemView;
@property(retain, nonatomic) FMChatSendTypeItemView *transferItemView; // @synthesize transferItemView=_transferItemView;
@property(retain, nonatomic) FMChatSendTypeItemView *photoItemView; // @synthesize photoItemView=_photoItemView;
@property(copy, nonatomic) CDUnknownBlockType voiceChatBlock; // @synthesize voiceChatBlock=_voiceChatBlock;
@property(copy, nonatomic) CDUnknownBlockType liveBlock; // @synthesize liveBlock=_liveBlock;
@property(copy, nonatomic) CDUnknownBlockType meetupBlock; // @synthesize meetupBlock=_meetupBlock;
@property(copy, nonatomic) CDUnknownBlockType transferBlock; // @synthesize transferBlock=_transferBlock;
@property(copy, nonatomic) CDUnknownBlockType photoBlock; // @synthesize photoBlock=_photoBlock;
@property(copy, nonatomic) CDUnknownBlockType cameraBlock; // @synthesize cameraBlock=_cameraBlock;
- (void).cxx_destruct;
- (void)setLiveTouchBlock:(CDUnknownBlockType)arg1;
- (void)setMeetupTouchBlock:(CDUnknownBlockType)arg1;
- (void)setTransferTouchBlock:(CDUnknownBlockType)arg1;
- (void)setPhotoTouchBlock:(CDUnknownBlockType)arg1;
- (void)setCameraTouchBlock:(CDUnknownBlockType)arg1;
- (void)voiceChatTouch;
- (void)liveTouch;
- (void)meetupTouch;
- (void)transferTouch;
- (void)photoTouch;
- (void)cameraTouch;
- (void)setTransferItemHidden:(_Bool)arg1;
- (void)setMeetupItemHidden:(_Bool)arg1;
- (void)setupItems;
- (void)setupLineView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
