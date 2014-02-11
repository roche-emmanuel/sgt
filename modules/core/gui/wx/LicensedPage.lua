local Class = require("classBuilder"){name="LicensedPage",bases="gui.wx.LicensedBase"};

-- This class provides functions to add wx controls.
function Class:initialize(options)
	self:check(options.page,"Invalid page in LicensedPage constructor")
	self:check(options.book,"Invalid book in LicensedPage constructor")
	
	self._page = options.page
	self._book = options.book
	self._index = options.index
	self._caption = options.caption
	self._selected = options.selected
	self._image = options.image
end

function Class:updateVisibility(show)
    -- toggle the visibility status:
    self._page:Show(show);
    local count = self._book:GetPageCount()
    if show then
        self._book:InsertPage(math.min(self._index or count,count),self._page,self._caption,self._selected,self._image)
    else
        for i=0,count-1 do
            if self._book:GetPage(i)==self._page then
                self._book:RemovePage(i)
                return
            end
        end
        
        self:warn("Could not find page to hide (caption was '",self._caption,"')");
    end
end

        
return Class
