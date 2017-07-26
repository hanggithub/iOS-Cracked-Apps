//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MRecognizerDelegate.h"

@class CAGradientLayer, MRecognizer, NSString, NSTimer, TBOUGCVoiceRecognizeHUD, UIButton, UILabel;

@interface TBOUGCVoiceInputView : UIView <MRecognizerDelegate>
{
    _Bool _speakTooShort;
    _Bool _isCountdown;
    _Bool _isStarted;
    CDUnknownBlockType _callBack;
    NSString *_btnText;
    UILabel *_lbBtn;
    UIButton *_btnVoice;
    CAGradientLayer *_normalLayer;
    CAGradientLayer *_selectedLayer;
    double _startTime;
    MRecognizer *_speechRecognizer;
    TBOUGCVoiceRecognizeHUD *_recognizeHUD;
    NSTimer *_timer;
    long long _remainTime;
}

@property(nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(nonatomic) _Bool isCountdown; // @synthesize isCountdown=_isCountdown;
@property(nonatomic) _Bool speakTooShort; // @synthesize speakTooShort=_speakTooShort;
@property(nonatomic) long long remainTime; // @synthesize remainTime=_remainTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TBOUGCVoiceRecognizeHUD *recognizeHUD; // @synthesize recognizeHUD=_recognizeHUD;
@property(retain, nonatomic) MRecognizer *speechRecognizer; // @synthesize speechRecognizer=_speechRecognizer;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) CAGradientLayer *selectedLayer; // @synthesize selectedLayer=_selectedLayer;
@property(retain, nonatomic) CAGradientLayer *normalLayer; // @synthesize normalLayer=_normalLayer;
@property(retain, nonatomic) UIButton *btnVoice; // @synthesize btnVoice=_btnVoice;
@property(retain, nonatomic) UILabel *lbBtn; // @synthesize lbBtn=_lbBtn;
@property(retain, nonatomic) NSString *btnText; // @synthesize btnText=_btnText;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void).cxx_destruct;
- (void)recognizer:(id)arg1 recordingWithVoiceVolume:(unsigned long long)arg2;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (void)touchUpOutside:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (void)touchDragInside:(id)arg1;
- (void)touchDragOutside:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)cancelAudioInput;
- (void)stopAudioInput;
- (void)startAudioInput;
- (id)getLayerFromColor:(id)arg1 toColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
