package org{
	import flash.display.*;
	import flash.system.fscommand;
	import flash.display.MovieClip;
	import flash.display.Shape;
	import flash.display.Sprite;
	import flash.display.StageQuality;
	import flash.events.*;
	import flash.utils.Timer;
	public class Bullet extends Fire {
		var playerName:String;
		public function Bullet(_playerName:String) {
			//var timer:Timer = new Timer();
			//timer.start();
			playerName=_playerName;
			addEventListener(Event.ENTER_FRAME , _enterFrame);
		}
		private function _enterFrame( event:Event ):void {
			switch (this.rotation) {
				case 0 :
					y-=10;
					break;
				case 90 :
					x+=10;
					break;
				case -90 :
					x-=10;
					break;
				case 180 :
					y+=10;
					break;
			}
			fscommand("blxsit "+.x,"blysit "+y);
		}
		private function attack():void {

		}
	}
}