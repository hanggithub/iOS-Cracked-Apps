//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class QQAIODynaDoodleCellView, QQAIOModel;

@interface QQDoodleDrawControlManger : NSObject
{
    QQAIODynaDoodleCellView *_currentDrawDoodleView;
    QQAIOModel *_currentScroolDrawDoodleMsgModel;
}

+ (id)getInstance;
@property(nonatomic) __weak QQAIOModel *currentScroolDrawDoodleMsgModel; // @synthesize currentScroolDrawDoodleMsgModel=_currentScroolDrawDoodleMsgModel;
@property(nonatomic) __weak QQAIODynaDoodleCellView *currentDrawDoodleView; // @synthesize currentDrawDoodleView=_currentDrawDoodleView;
- (void).cxx_destruct;
- (void)stopCurrentDrawView;

@end

