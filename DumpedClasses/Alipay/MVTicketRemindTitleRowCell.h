//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MVEasterEggView, UILabel;

@interface MVTicketRemindTitleRowCell : UITableViewCell
{
    UILabel *_filmTitleLabel;
    UILabel *_showTimeLabel;
    UILabel *_cinemaHallLabel;
    MVEasterEggView *_eggView;
}

@property(retain, nonatomic) MVEasterEggView *eggView; // @synthesize eggView=_eggView;
@property(retain, nonatomic) UILabel *cinemaHallLabel; // @synthesize cinemaHallLabel=_cinemaHallLabel;
@property(retain, nonatomic) UILabel *showTimeLabel; // @synthesize showTimeLabel=_showTimeLabel;
@property(retain, nonatomic) UILabel *filmTitleLabel; // @synthesize filmTitleLabel=_filmTitleLabel;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
