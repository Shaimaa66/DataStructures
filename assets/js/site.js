/* Works directly from file:// or GitHub Pages: no APIs or remote assets. */
(()=>{'use strict';
const search=document.getElementById('chapterSearch'),cards=[...document.querySelectorAll('.chapter')],filters=[...document.querySelectorAll('[data-filter]')];
let active='all';
function apply(){const term=search?.value.trim().toLocaleLowerCase()||'';let shown=0;for(const card of cards){const type=card.dataset.category;const match=(active==='all'||type===active)&&card.dataset.search.includes(term);card.classList.toggle('hidden',!match);if(match)shown++}const empty=document.getElementById('noResults');if(empty)empty.style.display=shown?'none':'block';const count=document.getElementById('resultsCount');if(count)count.textContent=`${shown} / ${cards.length} chapters`}
search?.addEventListener('input',apply);
filters.forEach(f=>f.addEventListener('click',()=>{active=f.dataset.filter;filters.forEach(x=>x.setAttribute('aria-pressed',String(x===f)));apply()}));
const pick=document.getElementById('chapterPicker');document.getElementById('openSelected')?.addEventListener('click',()=>{if(pick?.value)location.href=pick.value});
function openResourceHash(){let id=decodeURIComponent(location.hash.slice(1));if(/^resources-\d{2}$/.test(id)){let item=document.getElementById(id);if(item&&item.tagName==='DETAILS')item.open=true}}
window.addEventListener('hashchange',openResourceHash);openResourceHash();apply();
})();