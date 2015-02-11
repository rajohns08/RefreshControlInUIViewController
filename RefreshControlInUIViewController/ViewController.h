//
//  ViewController.h
//  RefreshControlInUIViewController
//
//  Created by Adam Johns on 2/11/15.
//  Copyright (c) 2015 Adam Johns. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableView;

@end

